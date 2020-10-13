/*
  RGBA_LED.h - Library for interfacing with 4-pin RGB Leds using PWM.
  Created by Olli-Antti Kivilahti 2020-10-08.
*/
#ifndef KeyPad_h
#define KeyPad_h

#include <Arduino.h>
#include <SoftwareSerial.h>

#define KEYPAD_KEY_BUFFER_MAX_SIZE 16

#define KEYPAD_TRANSACTION_NOOP 0
/** More key presses then the maximum allowed, reset transaction */
#define KEYPAD_TRANSACTION_OVERFLOW 1
/** Less key presses than the minimum allowed, wait for more or timeout */
#define KEYPAD_TRANSACTION_UNDERFLOW 2
/** When minimum and maximum length of code is the same, we look for a precise number of key presses. This is it! */
#define KEYPAD_TRANSACTION_DONE 3
/** Key presses count somewhere between maximum and minimum. Try to authenticate. */
#define KEYPAD_TRANSACTION_MAYBE_DONE 4
/** Transaction timed out */
#define KEYPAD_TRANSACTION_TIMEOUT 5

class KeyPad {
  public:
    KeyPad(SoftwareSerial* ss, int code_length_min = 4, int code_length_max = 4, int transaction_timeout_ms = 2000);
    KeyPad(int tx_pin, int rx_pin, int code_length_min = 4, int code_length_max = 4, int transaction_timeout_ms = 2000);
    char check_for_key(void);
    bool maybe_flush_stale_transaction(void);
    /** Returns one of the KEYPAD_TRANSACTION-statuses */
    int maybe_transaction_complete(void);
    void _init(int code_length_min, int code_length_max, int transaction_timeout_ms);
    char _push_key(char c);
    void _transaction_new(void);
    int _code_length_min;
    int _code_length_max;
    char* _key_buffer;
    int _keys_read_idx;
    unsigned long int _last_key_press_ms;
    int _transaction_timeout_ms;
  private:
    SoftwareSerial* _serial;
};

#endif

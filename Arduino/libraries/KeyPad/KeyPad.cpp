#define KeyPad_LOG
#include "KeyPad.h"
#include <SoftwareSerial.h>

KeyPad::KeyPad(SoftwareSerial* ss, int code_length_min, int code_length_max, int transaction_timeout_ms) {
  KeyPad::_init(code_length_min, code_length_max, transaction_timeout_ms);
  _serial = ss;
  _serial->begin(9600);
}
/** For some reason initializing the SoftwareSerial here does not work.
    _serial->read() has nothing ever.
    Initializing SoftwareSerial before setup() in the main Arduino sketch works. */
KeyPad::KeyPad(int tx_pin, int rx_pin, int code_length_min, int code_length_max, int transaction_timeout_ms) {
  KeyPad::_init(code_length_min, code_length_max, transaction_timeout_ms);
  SoftwareSerial serial(rx_pin, tx_pin);
  _serial = &serial;
  _serial->begin(9600);
}
void KeyPad::_init(int code_length_min, int code_length_max, int transaction_timeout_ms) {
  #ifdef KeyPad_LOG
  Serial.print("KeyPad::KeyPad() ");
  Serial.print(" code_length_min ");
  Serial.print(code_length_min);
  Serial.print(" code_length_max ");
  Serial.print(code_length_max);
  Serial.print(" transaction_timeout_ms");
  Serial.print(transaction_timeout_ms);
  Serial.println();
  #endif

  char key_buffer[KEYPAD_KEY_BUFFER_MAX_SIZE]; // Initialize an arbitrary large array so we don't need to bother with memory management.
  _key_buffer = &key_buffer[0];
  _transaction_timeout_ms = transaction_timeout_ms;
  _code_length_min = code_length_min;
  _code_length_max = code_length_max;
  KeyPad::_transaction_new();
}

int KeyPad::maybe_transaction_complete() {
  if (_keys_read_idx >= 0 && KeyPad::maybe_flush_stale_transaction()) { return KEYPAD_TRANSACTION_TIMEOUT; }

  char c = KeyPad::check_for_key();
  if (c == -1) { return KEYPAD_TRANSACTION_NOOP; }

  if (_keys_read_idx >= _code_length_max) {
    KeyPad::_transaction_new();
    KeyPad::_push_key(c);
    return KEYPAD_TRANSACTION_OVERFLOW;
  }
  else if (_keys_read_idx < _code_length_min-1) {
    return KEYPAD_TRANSACTION_UNDERFLOW;
  }
  else if (_code_length_min == _code_length_max && _keys_read_idx == _code_length_min-1) {
    return KEYPAD_TRANSACTION_DONE;
  }
  else {
    return KEYPAD_TRANSACTION_MAYBE_DONE;
  }
}

char KeyPad::check_for_key() {
  char c = _serial->read();

  if (c != -1) {
    #ifdef KeyPad_LOG
    Serial.print("KeyPad::check_for_key():> ");
    Serial.println(c);
    #endif

    if (_keys_read_idx >= KEYPAD_KEY_BUFFER_MAX_SIZE) { KeyPad::_transaction_new(); }
    KeyPad::_push_key(c);
  }
  return c;
}
char KeyPad::_push_key(char c) {
  _keys_read_idx++;
  _key_buffer[_keys_read_idx] = c;
  _last_key_press_ms = millis();
  return c;
}

bool KeyPad::maybe_flush_stale_transaction() {
  long signed int ms = millis() - _transaction_timeout_ms;
  if (ms < 0) { return false; }
  if (ms >= _last_key_press_ms) {
    #ifdef KeyPad_LOG
    Serial.println("KeyPad::flush_stale_transaction():>");
    #endif
    KeyPad::_transaction_new();
    return true;
  }
  return false;
}

void KeyPad::_transaction_new() {
  #ifdef KeyPad_LOG
  Serial.println("KeyPad::_transaction_new():>");
  #endif

  _keys_read_idx = -1;
  _last_key_press_ms = millis();
  for (int i=0 ; i<KEYPAD_KEY_BUFFER_MAX_SIZE ; i++) {
    _key_buffer[i] = 0x00;
  }
}

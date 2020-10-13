#include <SoftwareSerial.h>
#include <KeyPad.h>

#define MODE_KEYS 0
#define MODE_PROD 1
int mode = MODE_KEYS;

const int pin_rx = 7;
const int pin_tx = 8;

SoftwareSerial ss = SoftwareSerial(pin_rx, pin_tx);
KeyPad* kp;

void setup() {
  Serial.begin(9600);
  KeyPad kp_tmp = KeyPad(&ss, 3, 6, 5000); // With variable pin-code length
  //KeyPad kp_tmp = KeyPad(&ss, 4, 4, 5000); // With an expected pin-code length
  kp = &kp_tmp;
}

void introspect() {
  Serial.print(millis());
  Serial.print(": _keys_read_idx ");
  Serial.print(kp->_keys_read_idx);
  Serial.print(" Transaction stale ");
  Serial.print(millis() - kp->_transaction_timeout_ms >= kp->_last_key_press_ms);
  Serial.print(" _last_key_press_ms ");
  Serial.print(kp->_last_key_press_ms);
  Serial.print(" KeyBuffer ");
  Serial.println(kp->_key_buffer);
}

void loop() {
  if (mode == MODE_KEYS) {
    char c = kp->check_for_key();
    if (c != -1) {
      Serial.println("New key press detected:");
      introspect();
    }
    if (c == '#') {
      mode = MODE_PROD;
      Serial.println("Transitioning to MODE_PROD");
    }
    else if (c == '*') {
      mode = MODE_KEYS;
      Serial.println("Transitioning to MODE_KEYS");
    }
  }
  else if (mode == MODE_PROD) {
    int status = kp->maybe_transaction_complete();
    if (status == KEYPAD_TRANSACTION_NOOP) {
      return;
    }
    if (status == KEYPAD_TRANSACTION_OVERFLOW) {
      Serial.println("KEYPAD_TRANSACTION_OVERFLOW");
    }
    else if (status == KEYPAD_TRANSACTION_UNDERFLOW) {
      Serial.println("KEYPAD_TRANSACTION_UNDERFLOW");
    }
    else if (status == KEYPAD_TRANSACTION_DONE) {
      Serial.println("KEYPAD_TRANSACTION_DONE");
      kp->_transaction_new();
    }
    else if (status == KEYPAD_TRANSACTION_MAYBE_DONE) {
      Serial.println("KEYPAD_TRANSACTION_MAYBE_DONE");
    }
    else if (status == KEYPAD_TRANSACTION_TIMEOUT) {
      Serial.println("KEYPAD_TRANSACTION_TIMEOUT");
    }
    introspect();
  }
}

//#define RGBA_LED_LOG
#include "RGBA_LED.h"
#include <Arduino.h>

RGBA_LED::RGBA_LED(int mode, int pin_r, int pin_g, int pin_b) {
  #ifdef RGBA_LED_LOG
  Serial.println("RGBA_LED::RGBA_LED()");
  #endif

  _pin_r = pin_r;
  _pin_g = pin_g;
  _pin_b = pin_b;
  _mode = mode;

  if (_mode == RGBA_LED_MODE_ANALOG) {
    _pinWriter = &analogWrite;
  }
  else if (_mode == RGBA_LED_MODE_DIGITAL) {
    _pinWriter = &digitalWrite;
  }
  else { RGBA_LED::_bad_mode_die(); }

  pinMode(_pin_r, OUTPUT);
  RGBA_LED::red(0);
  pinMode(_pin_g, OUTPUT);
  RGBA_LED::green(0);
  pinMode(_pin_b, OUTPUT);
  RGBA_LED::blue(0);
}

void RGBA_LED::color(int r, int g, int b) {
  #ifdef RGBA_LED_LOG
  Serial.println("RGBA_LED::color():> r "+r+" g "+g+" b "+b);
  #endif
  RGBA_LED::red(r);
  RGBA_LED::green(g);
  RGBA_LED::blue(b);
}

void RGBA_LED::red(int r) {
  #ifdef RGBA_LED_LOG
  Serial.println("RGBA_LED::red():> r "+r);
  #endif
  (*_pinWriter)(_pin_r, r);
  _r = r;
}

void RGBA_LED::green(int g) {
  #ifdef RGBA_LED_LOG
  Serial.println("RGBA_LED::green():> g "+g);
  #endif
  (*_pinWriter)(_pin_g, g);
  _g = g;
}

void RGBA_LED::blue(int b) {
  #ifdef RGBA_LED_LOG
  Serial.println("RGBA_LED::blue():> b "+b);
  #endif
  (*_pinWriter)(_pin_b, b);
  _b = b;
}

void RGBA_LED::_bad_mode_die() {
  Serial.println("RGBA_LED::RGBA_LED():> Bad RGBA_LED_MODE "+_mode);
  exit(-1);
}

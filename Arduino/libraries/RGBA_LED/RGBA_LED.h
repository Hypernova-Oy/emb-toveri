/*
  RGBA_LED.h - Library for interfacing with 4-pin RGB Leds using PWM.
  Created by Olli-Antti Kivilahti 2020-10-08.
*/
#ifndef RGBA_LED_h
#define RGBA_LED_h

#include <Arduino.h>

#define RGBA_LED_MODE_ANALOG 0
#define RGBA_LED_MODE_DIGITAL 1

class RGBA_LED
{
  public:
    RGBA_LED(int mode, pin_size_t pin_r, pin_size_t pin_g, pin_size_t pin_b);
    void color(int r = 255, int g = 255, int b = 255);
    void red(int r = 255);
    void green(int g = 255);
    void blue(int b = 255);
    int _r, _g, _b;
  private:
    void _bad_mode_die(void);
    int _pin_r, _pin_g, _pin_b;
    int _mode;
    void (*_pinWriter)(pin_size_t, int);
};

#endif

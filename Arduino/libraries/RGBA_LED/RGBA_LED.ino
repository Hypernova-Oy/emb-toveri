#include <RGBA_LED.h>

RGBA_LED* led;

const int LED_R = 3;
const int LED_G = 6;
const int LED_B = 5;

void (RGBA_LED::*target)(int);

void setup() {
  Serial.begin(9600);
  RGBA_LED led_tmp = RGBA_LED(RGBA_LED_MODE_ANALOG, 3, 6, 5);
  led = &led_tmp;
  target = &RGBA_LED::red;
}

int i=0;
void loop() {
  (led->*target)(i);
  i = i+1;
  if (i > 255) {
    i = 0;
    led->color(0,0,0);
    if (target == &RGBA_LED::red) { target = &RGBA_LED::green; }
    else if (target == &RGBA_LED::green) { target = &RGBA_LED::blue; }
    else if (target == &RGBA_LED::blue) { target = &RGBA_LED::red; }
  }
  delay(10);
  Serial.print("R=");
  Serial.print(led->_r);
  Serial.print(" G=");
  Serial.print(led->_g);
  Serial.print(" B=");
  Serial.print(led->_b);
  Serial.println();
}

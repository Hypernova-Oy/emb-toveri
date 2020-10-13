/*
  RGBA_LED.h - Library for interfacing with 4-pin RGB Leds using PWM.
  Created by Olli-Antti Kivilahti 2020-10-08.
*/
#ifndef DS18B20_h
#define DS18B20_h

#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>

#define DS18B20_READING_SIZE 6

class DS18B20 {
  public:
    DS18B20(int one_wire_pin, short max_devices_count = 2);
    char* temperatures(void);
    int refresh_device_count(void);
    int _device_count;
    short _max_devices_count;
    DallasTemperature *_sensors;
    char* _temperatures;
  private:
};

#endif

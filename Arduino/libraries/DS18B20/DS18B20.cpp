//#define DS18B20_LOG
#include "DS18B20.h"
#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>

DS18B20::DS18B20(int one_wire_pin, short max_devices_count) {
  #ifdef DS18B20_LOG
  Serial.println("DS18B20::DS18B20()");
  #endif

  _max_devices_count = max_devices_count;
  char temperatures[_max_devices_count][DS18B20_READING_SIZE];
  _temperatures = &temperatures[0][0];

  // Setup a oneWire instance to communicate with any OneWire devices 
  // (not just Maxim/Dallas temperature ICs)
  OneWire oneWire(one_wire_pin);
  // Pass our oneWire reference to Dallas Temperature.
  DallasTemperature sensors(&oneWire);

  _sensors = &sensors;
  //_sensors->setResolution(9);
  _sensors->begin();

  DS18B20::refresh_device_count();
}

int DS18B20::refresh_device_count() {
  #ifdef DS18B20_LOG
  Serial.println("DS18B20::refresh_device_count():>");
  #endif
  _device_count = _sensors->getDeviceCount();
  if (_device_count > _max_devices_count) {
    Serial.println("DS18B20::refresh_device_count():> More devices detected than prepared to store temperatures for! Expand temperatures array size.");
  }
  return _device_count;
}

char* DS18B20::temperatures() {
  #ifdef DS18B20_LOG
  Serial.println("DS18B20::temperatures():>");
  #endif
  _sensors->requestTemperatures(); // Send the command to get temperatures

  for (int i=0 ; i<_device_count ; i++) {
    float temp = _sensors->getTempCByIndex(i);
    if (! temp) { temp = _sensors->getTempCByIndex(i); }
    dtostrf(temp, DS18B20_READING_SIZE-1, 2, _temperatures + i*DS18B20_READING_SIZE);
  }

  return _temperatures;
}

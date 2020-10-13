#include <DS18B20.h>

//DS18B20 test
const byte ONE_WIRE_BUS = 4;

DS18B20 *temp;

void setup(void) {
  DS18B20 temp_tmp = DS18B20(ONE_WIRE_BUS);
  temp = &temp_tmp;

  Serial.begin(9600); //For performance measurement
}

void loop(void) {
  char* temps = temp->temperatures();
  Serial.println("Temperatures");
  for (int i=0 ; i<temp->_device_count ; i++) {
    Serial.print("  ");
    Serial.println(temps + i*DS18B20_READING_SIZE);
  }
  delay(1000);
}
#include "Wire.h"
#include "Arduino.h"
#include "SPI.h"

#define RS   30
#define E    31

#define ASDA  20
#define ASCL  21

#define SCLK   13
#define SDIN   12
#define SDOUT  11
#define CS     10
#define RES    9

// R/W signal tied LOW (always write)
// SA0 signal tied LOW

void init_oled();
void send_packet(unsigned char x);
void data(unsigned char d);
void command(unsigned char c);

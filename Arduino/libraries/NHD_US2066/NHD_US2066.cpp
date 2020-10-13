//#define NHD_US2066_LOG
#include "NHD_US2066.h"
#include <Arduino.h>
#include <SPI.h>

const unsigned char ROW_N = 4;                 // Number of display rows
const unsigned char COLUMN_N = 20;             // Number of display columns

// Assign pins
// SPI
const unsigned char RES = 9;                 // Arduino's pin assigned to the Reset line (optional, can be always high)
const unsigned char CS = 10;

unsigned char new_line[4] = {0x80, 0xA0, 0xC0, 0xE0};               // DDRAM address for each line of the display
const unsigned char char_positions[4][20] = {
  {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13},
  {0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 0x30, 0x31, 0x32, 0x33},
  {0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 0x50, 0x51, 0x52, 0x53},
  {0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F, 0x70, 0x71, 0x72, 0x73}
};

NHD_US2066::NHD_US2066() {
  #ifdef NHD_US2066_LOG
  Serial.println("NHD_US2066::NHD_US2066()");
  #endif
  unsigned char rows;

  /* OLED SPI Setup */
  pinMode(RES, OUTPUT);            // Initializes Arduino pin for the Reset line (optional)
  digitalWrite(RES, HIGH);         // Sets HIGH the Reset line of the display (optional, can be always high)
  pinMode(CS, OUTPUT);
  digitalWrite(CS, HIGH);
  SPI.begin();
  SPI.beginTransaction(SPISettings(9600, LSBFIRST, SPI_MODE3));
  //SPI.setBitOrder(LSBFIRST);
  //SPI.setClockDivider(SPI_CLOCK_DIV2);
  //SPI.setDataMode(SPI_MODE3);

  delayMicroseconds(200);            // Waits 200 us for stabilization purpose

  digitalWrite(CS, LOW);
  if (ROW_N == 2 || ROW_N == 4)
    rows = 0x08;                    // Display mode: 2/4 lines
  else
    rows = 0x00;                    // Display mode: 1/3 lines

  _write_command(0x22 | rows); // Function set: extended command set (RE=1), lines #
  _write_command(0x71);        // Function selection A:
  //_write_data(0x5C);           //  enable internal Vdd regulator at 5V I/O mode (def. value) (0x00 for disable, 2.8V I/O)
  _write_data(0x00);           //  enable internal Vdd regulator at 5V I/O mode (def. value) (0x00 for disable, 2.8V I/O)
  _write_command(0x20 | rows); // Function set: fundamental command set (RE=0) (exit from extended command set), lines #
  _write_command(0x08);        // Display ON/OFF control: display off, cursor off, blink off (default values)
  _write_command(0x22 | rows); // Function set: extended command set (RE=1), lines #
  _write_command(0x79);        // OLED characterization: OLED command set enabled (SD=1)
  _write_command(0xD5);        // Set display clock divide ratio/oscillator frequency:
  _write_command(0x70);        //  divide ratio=1, frequency=7 (default values)
  _write_command(0x78);        // OLED characterization: OLED command set disabled (SD=0) (exit from OLED command set)

  if (ROW_N > 2)
    _write_command(0x09);      // Extended function set (RE=1): 5-dot font, B/W inverting disabled (def. val.), 3/4 lines
  else
    _write_command(0x08);      // Extended function set (RE=1): 5-dot font, B/W inverting disabled (def. val.), 1/2 lines

  _write_command(0x06);        // Entry Mode set - COM/SEG direction: COM0->COM31, SEG99->SEG0 (BDC=1, BDS=0)
  _write_command(0x72);        // Function selection B:
  _write_data(0x0A);           //  ROM/CGRAM selection: ROM C, CGROM=250, CGRAM=6 (ROM=10, OPR=10)
  _write_command(0x79);        // OLED characterization: OLED command set enabled (SD=1)
  _write_command(0xDA);        // Set SEG pins hardware configuration:
  _write_command(0x10);        //  alternative odd/even SEG pin, disable SEG left/right remap (default values)
  _write_command(0xDC);        // Function selection C:
  _write_command(0x00);        //  internal VSL, GPIO input disable
  _write_command(0x81);        // Set contrast control:
  _write_command(0x7F);        //  contrast=127 (default value)
  _write_command(0xD9);        // Set phase length:
  _write_command(0xF1);        //  phase2=15, phase1=1 (default: 0x78)
  _write_command(0xDB);        // Set VCOMH deselect level:
  _write_command(0x40);        //  VCOMH deselect level=1 x Vcc (default: 0x20=0,77 x Vcc)
  _write_command(0x78);        // OLED characterization: OLED command set disabled (SD=0) (exit from OLED command set)
  _write_command(0x20 | rows); // Function set: fundamental command set (RE=0) (exit from extended command set), lines #
  _write_command(0x01);        // Clear display
  delay(2);              // After a clear display, a minimum pause of 1-2 ms is required
  _write_command(0x80);        // Set DDRAM address 0x00 in address counter (cursor home) (default value)
  _write_command(0x0C);        // Display ON/OFF control: display ON, cursor off, blink off

  digitalWrite(CS, HIGH);
  delay(250);            // Waits 250 ms for stabilization purpose after display on

  if (ROW_N == 2)
    new_line[1] = 0xC0;             // DDRAM address for each line of the display (only for 2-line mode)
}

unsigned char NHD_US2066::_start_byte(bool dc, bool rw) {
  //Five concurrent HIGHs
  unsigned char byte = 0b00011111;

  //R/W selection
  if (rw) { byte = byte | 0b00100000; }

  //data or command selection
  if (dc) { byte = byte | 0b01000000; }

  //Start byte end bit
  //byte =| 0b00000000;

  return byte;
}

unsigned char NHD_US2066::_read_command(unsigned char c) {
  SPI.transfer(NHD_US2066::_start_byte(0, 1));
  //delay(1); // If the cable is longer, this delay might be necessary
  return SPI.transfer(0x00);
}

void NHD_US2066::_write_command(unsigned char c) {
  #ifdef NHD_US2066_LOG
  Serial.println("NHD_US2066::_command():> byte "+c);
  #endif
  SPI.transfer(NHD_US2066::_start_byte(0, 0));
  NHD_US2066::_send_byte(c);                      // Transmits the byte
}

unsigned char NHD_US2066::_read_data() {
  SPI.transfer(NHD_US2066::_start_byte(1, 1));
  //delay(1); // If the cable is longer, this delay might be necessary
  return SPI.transfer(0x00);
}

void NHD_US2066::_write_data(unsigned char d) {
  #ifdef NHD_US2066_LOG
  Serial.println("NHD_US2066::_data():> byte "+d);
  #endif
  SPI.transfer(NHD_US2066::_start_byte(1, 0));
  NHD_US2066::_send_byte(d);
}

// SPI sends and receives at the same time, bit by bit on SCLK beats
void NHD_US2066::_send_byte(unsigned char tx_b) {
  #ifdef NHD_US2066_LOG
  Serial.println("NHD_US2066::_send_byte():> byte "+tx_b);
  #endif
  //Split the bytes into two and pad the last four bits with 0s
  unsigned char tx_b1 = tx_b & 0x0F;
  unsigned char tx_b2 = (tx_b >> 4) & 0x0F;

  //Or together the bytes
  int tx_int = (tx_b2<<8)|tx_b1;

  //transfer it
  SPI.transfer16(tx_int);
}

void NHD_US2066::_slave_select() {
  digitalWrite(CS, LOW);
}
void NHD_US2066::_slave_release() {
  digitalWrite(CS, HIGH);
}

unsigned char NHD_US2066::_read_byte() {
  return SPI.transfer(0x00);
}

void NHD_US2066::_move_cursor_to_pos(int row_idx, int col_idx) {
  unsigned char cmd = char_positions[row_idx][col_idx];
  cmd |= 128; //Put the 8th bit on to tell the MPU that this is a "Set DDRAM Address"-command
  NHD_US2066::_write_command(cmd);
}

void NHD_US2066::_move_to_row(int row_idx) {
  NHD_US2066::_write_command(new_line[row_idx]);
}

void NHD_US2066::clear_display() {
  NHD_US2066::_slave_select();
  NHD_US2066::_write_command(0b00000001);
  delay(2); // After a clear display, a minimum pause of 1-2 ms is required
  NHD_US2066::_slave_release();
}

void NHD_US2066::display_on_off(bool on, bool cursor, bool blink) {
  NHD_US2066::_slave_select();
  unsigned char byte = 0b00001000;

  if (on) {
      byte |= 4; //Put the 4th bit on
  }
  if (cursor) {
      byte |= 2;
  }
  if (blink) {
      byte |= 1;
  }

  NHD_US2066::_write_command(byte);
  NHD_US2066::_slave_release();
}

void NHD_US2066::double_line_text(int mode) {
  NHD_US2066::_slave_select();
  if (mode == NHD_TWOLINE_MODE_OFF) {
    NHD_US2066::_write_command(0b00101000);  //______ function set (extended command set) - Disable 2-line characters
  }
  else if (mode == NHD_TWOLINE_MODE_112) {
    NHD_US2066::_write_command(0b00101110);  //______ function set (extended command set) - Enable 2-line characters  -> RE = 1
    NHD_US2066::_write_command(0b00010001);  //__RE__ Double Height (4-line), both lines double height
    NHD_US2066::_write_command(0b00101100);  //______ function set (extended command set) - Enable 2-line characters  -> RE = 0
  }
  else if (mode == NHD_TWOLINE_MODE_121) {
    NHD_US2066::_write_command(0b00101110);  //______ function set (extended command set) - Enable 2-line characters  -> RE = 1
    NHD_US2066::_write_command(0b00010101);  //__RE__ Double Height (4-line), both lines double height
    NHD_US2066::_write_command(0b00101100);  //______ function set (extended command set) - Enable 2-line characters  -> RE = 0
  }
  else if (mode == NHD_TWOLINE_MODE_22) {
    NHD_US2066::_write_command(0b00101110);  //______ function set (extended command set) - Enable 2-line characters  -> RE = 1
    NHD_US2066::_write_command(0b00011001);  //__RE__ Double Height (4-line), both lines double height
    NHD_US2066::_write_command(0b00101100);  //______ function set (extended command set) - Enable 2-line characters  -> RE = 0
  }
  else if (mode == NHD_TWOLINE_MODE_211) {
    NHD_US2066::_write_command(0b00101110);  //______ function set (extended command set) - Enable 2-line characters  -> RE = 1
    NHD_US2066::_write_command(0b00011101);  //__RE__ Double Height (4-line), both lines double height
    NHD_US2066::_write_command(0b00101100);  //______ function set (extended command set) - Enable 2-line characters  -> RE = 0
  }
  else {
    Serial.print("NHD_US2066::double_line_text():> Unknown NHD_TWOLINE_MODE ");
    Serial.print(mode);
    Serial.println();
    exit(-1);
  }
  NHD_US2066::_slave_release();
}

void NHD_US2066::print_char(unsigned char c, int row_idx, int col_idx) {
  NHD_US2066::_slave_select();
  NHD_US2066::_move_cursor_to_pos(row_idx, col_idx);
  NHD_US2066::_write_data(c);
  NHD_US2066::_slave_release();
}

void NHD_US2066::print_row(int row_idx, unsigned char row[]) {
  NHD_US2066::_slave_select();
  NHD_US2066::_move_cursor_to_pos(row_idx, 0);
  for (int c = 0; c < COLUMN_N; c++) {
    NHD_US2066::_write_data(row[c]);
  }
  NHD_US2066::_slave_release();
}

unsigned char* NHD_US2066::read_row(int row_idx) {
  unsigned char row[COLUMN_N];
  return read_row(row_idx, row);
}
unsigned char* NHD_US2066::read_row(int row_idx, unsigned char *row) {
  NHD_US2066::_slave_select();
  NHD_US2066::_move_cursor_to_pos(row_idx, 0);
  NHD_US2066::_read_data(); //Read columns+1 count of bytes. The first byte is always a bogus-byte needed by the MPU to prepare for the incoming read operations
  for(int i=0;i<COLUMN_N;i++){
    row[i] = NHD_US2066::_read_byte();
  }
  NHD_US2066::_slave_release();
  return row;
}
unsigned char NHD_US2066::read_char(int row_idx, int col_idx) {
  NHD_US2066::_slave_select();
  NHD_US2066::_move_cursor_to_pos(row_idx, col_idx);
  NHD_US2066::_read_data();
  unsigned char c = NHD_US2066::_read_byte();
  NHD_US2066::_slave_release();
  return c;
}

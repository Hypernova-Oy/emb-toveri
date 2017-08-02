/*
 * Demo_NHD0420CW-Ax3_SPI_HW.ino
 *
 * Tutorial sketch for use of character OLED slim display family by Newhaven with Arduino Uno, without
 * using any library.  Models: NHD0420CW-Ax3, NHD0220CW-Ax3, NHD0216CW-Ax3. Controller: US2066
 * in this example, the display is connected to Arduino via SPI interface.
 *
 * Displays on the OLED alternately a 4-line message and a sequence of character "block".
 * This sketch assumes the use of a 4x20 display; if different, modify the values of the two variables
 * ROW_N e COLUMN_N.
 * The sketch uses the minimum possible of Arduino's pins; if you intend to use also /RES or /CS lines,
 * the related instructions are already present, it's sufficient to remove the comment markers.
 *
 * The circuit:
 * OLED pin 1 (Vss)    to Arduino pin ground
 * OLED pin 2 (VDD)    to Arduino pin 5V
 * OLED pin 3 (REGVDD) to Arduino pin 5V
 * OLED pin 4 to 6     to Vss ground
 * OLED pin 7 (SCLK)   to Arduino pin D13 (SCK)
 * OLED pin 8 (SID)    to Arduino pin D11 (MOSI)
 * OLED pin 9 (SOD)    to Arduino pin D12 (MISO) (optional, can be not connected)
 * OLED pin 10 to 14   to Vss ground
 * OLED pin 15 (/CS)   to Vss ground  (or to Arduino pin D2, in case of use of more than one display)
 * OLED pin 16 (/RES)  to Arduino pin Reset or VDD 5V (or to Arduino pin D3, to control reset by sw)
 * OLED pin 17 (BS0)   to Vss ground
 * OLED pin 18 (BS1)   to Vss ground
 * OLED pin 19 (BS2)   to Vss ground
 * OLED pin 20 (Vss)   to Vss ground                                                                                
 *                                                                                                                  
 * Original example created by Newhaven Display International Inc.                                                  
 * Modified and adapted to Arduino Uno 30 Mar 2015 by Pasquale D'Antini                                             
 * Modified 19 May 2015 by Pasquale D'Antini                                                                        
 * Modified to use hardware SPI 1 April 2016 by Joakim Sandström                                                    
 *                                                                                                                  
 * This example code is in the public domain.                                                                       
 */                                                                                                                 

// inslude the SPI library:                                                                                         
#include <SPI.h>                                                                                                    
#include <OneWire.h>
#include <DallasTemperature.h>


const byte ROW_N = 4;                 // Number of display rows                                                     
const byte COLUMN_N = 20;             // Number of display columns                                                  

// Assign pins
// SPI
const byte RES = 9;                 // Arduino's pin assigned to the Reset line (optional, can be always high)      
const byte CS = 10;                                                                                                  

//LED test
const byte LED_G = 4;
const byte LED_B = 3;
const byte LED_R = 2;

//DS18B20 test
const byte ONE_WIRE_BUS = 5;
// Setup a oneWire instance to communicate with any OneWire devices 
// (not just Maxim/Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);
// Pass our oneWire reference to Dallas Temperature.
DallasTemperature sensors(&oneWire);


const byte TEXT[4][21] = {"1-Newhaven Display--",                                                                   
                          "2-------Test--------",                                                                   
                          "3-16/20-Characters--",
                          "4!@#$%^&*()_+{}[]<>?"
};         // Strings to be displayed

char temp1[21] = "0000.000000000000000";
char temp2[21] = "0000.000000000000000";
char TEMP_TEXT[2][21] = {"----TEMPERATURES----",
                         "----DONE TEMPERS----"};

byte new_line[4] = {0x80, 0xA0, 0xC0, 0xE0};               // DDRAM address for each line of the display
byte rows = 0x08;                     // Display mode: 1/3 lines or 2/4 lines; default 2/4 (0x08)
// _______________________________________________________________________________________
void command(byte c)                  // SUBROUTINE: PREPARES THE TRANSMISSION OF A COMMAND
{
  SPI.transfer(0x1F);

  send_byte(c);                      // Transmits the byte
}


// _______________________________________________________________________________________
void data(byte d)
{
  SPI.transfer(0x5F);

  send_byte(d);
}

// _______________________________________________________________________________________
void send_byte(byte tx_b)
{
  //Split the bytes into two and pad the last four bits with 0s
  byte tx_b1 = tx_b & 0x0F;
  byte tx_b2 = (tx_b >> 4) & 0x0F;

  //Or together the bytes
  int tx_int = (tx_b2<<8)|tx_b1;

  //transfer it
  SPI.transfer16(tx_int);
}

// _______________________________________________________________________________________

void output(void)                     // SUBROUTINE: DISPLAYS THE FOUR STRINGS, THEN THE SAME IN REVERSE ORDER
{
  unsigned long lastTime = 0;
  unsigned long temp;
  byte r = 0;                        // Row index
  byte c = 0;                        // Column index

  command(0x01);                     // Clears display (and cursor home)
  delay(2);                          // After a clear display, a minimum pause of 1-2 ms is required

  for (r = 0; r < ROW_N; r++)        // One row at a time,
  {
    command(new_line[r]);           //  moves the cursor to the first column of that line
    for (c = 0; c < COLUMN_N; c++)  // One character at a time,
    {
      data(TEXT[r][c]);            //  displays the correspondig string
    }
  }

  delay(500);                       // Waits, only for visual effect purpose

  lastTime = millis();
  command(new_line[r]);           //  moves the cursor to the first column of that line
  for (c = 0; c < COLUMN_N; c++)  // One character at a time,
  {
    data(TEMP_TEXT[0][c]);
  }
  command(new_line[r]);           //  moves the cursor to the first column of that line
  for (c = 0; c < COLUMN_N; c++)  // One character at a time,
  {
    data(temp1[c]);
  }
  command(new_line[r]);           //  moves the cursor to the first column of that line
  for (c = 0; c < COLUMN_N; c++)  // One character at a time,
  {
    data(temp2[c]);
  }
  command(new_line[r]);           //  moves the cursor to the first column of that line
  for (c = 0; c < COLUMN_N; c++)  // One character at a time,
  {
    data(TEMP_TEXT[1][c]);
  }
  temp = millis() - lastTime;
  Serial.println(temp);
  delay(1500);
}
// _______________________________________________________________________________________

void blocks(void)                     // SUBROUTINE: FILLS THE ENTIRE DISPLAY WITH THE CHARACTER "BLOCK"
{
  byte r = 0;                        // Row index
  byte c = 0;                        // Column index

  command(0x01);                     // Clear display (and cursor home)
  delay(2);                          // After a clear display, a minimum pause of 1-2 ms is required

  for (r = 0; r < ROW_N; r++)        // One row at a time,
  {
    command(new_line[r]);           //  moves the cursor to the first column of that line
    for (c = 0; c < COLUMN_N; c++)  // One character at a time,
    {
      data(0xDB);                  //  displays the character 0xDB (block)
      delay(10);                   // Waits, only for visual effect purpose
    }
    delay(100);                     // Waits, only for visual effect purpose
  }
}
// _______________________________________________________________________________________

void setup(void)                      // INITIAL SETUP
{
     /* RGB LED Setup */
     pinMode(LED_R, OUTPUT);
     digitalWrite(LED_R, HIGH);
     pinMode(LED_G, OUTPUT);
     digitalWrite(LED_G, HIGH);
     pinMode(LED_B, OUTPUT);
     digitalWrite(LED_B, HIGH);


    // DS18B20
    sensors.begin();
    


     /* OLED SPI Setup */
     pinMode(RES, OUTPUT);            // Initializes Arduino pin for the Reset line (optional)
     digitalWrite(RES, HIGH);         // Sets HIGH the Reset line of the display (optional, can be always high)
     pinMode(CS, OUTPUT);
     digitalWrite(CS, HIGH);
  SPI.begin();
  SPI.setBitOrder(LSBFIRST);
  SPI.setClockDivider(SPI_CLOCK_DIV2);
  SPI.setDataMode(SPI_MODE3);

  delayMicroseconds(200);            // Waits 200 us for stabilization purpose

digitalWrite(CS, LOW);
  if (ROW_N == 2 || ROW_N == 4)
    rows = 0x08;                    // Display mode: 2/4 lines
  else
    rows = 0x00;                    // Display mode: 1/3 lines

  command(0x22 | rows); // Function set: extended command set (RE=1), lines #
  command(0x71);        // Function selection A:
  data(0x5C);           //  enable internal Vdd regulator at 5V I/O mode (def. value) (0x00 for disable, 2.8V I/O)
  command(0x20 | rows); // Function set: fundamental command set (RE=0) (exit from extended command set), lines #
  command(0x08);        // Display ON/OFF control: display off, cursor off, blink off (default values)
  command(0x22 | rows); // Function set: extended command set (RE=1), lines #
  command(0x79);        // OLED characterization: OLED command set enabled (SD=1)
  command(0xD5);        // Set display clock divide ratio/oscillator frequency:
  command(0x70);        //  divide ratio=1, frequency=7 (default values)
  command(0x78);        // OLED characterization: OLED command set disabled (SD=0) (exit from OLED command set)

  if (ROW_N > 2)
    command(0x09);  // Extended function set (RE=1): 5-dot font, B/W inverting disabled (def. val.), 3/4 lines
  else
    command(0x08);  // Extended function set (RE=1): 5-dot font, B/W inverting disabled (def. val.), 1/2 lines

  command(0x06);        // Entry Mode set - COM/SEG direction: COM0->COM31, SEG99->SEG0 (BDC=1, BDS=0)
  command(0x72);        // Function selection B:
  data(0x0A);           //  ROM/CGRAM selection: ROM C, CGROM=250, CGRAM=6 (ROM=10, OPR=10)
  command(0x79);        // OLED characterization: OLED command set enabled (SD=1)
  command(0xDA);        // Set SEG pins hardware configuration:
  command(0x10);        //  alternative odd/even SEG pin, disable SEG left/right remap (default values)
  command(0xDC);        // Function selection C:
  command(0x00);        //  internal VSL, GPIO input disable
  command(0x81);        // Set contrast control:
  command(0x7F);        //  contrast=127 (default value)
  command(0xD9);        // Set phase length:
  command(0xF1);        //  phase2=15, phase1=1 (default: 0x78)
  command(0xDB);        // Set VCOMH deselect level:
  command(0x40);        //  VCOMH deselect level=1 x Vcc (default: 0x20=0,77 x Vcc)
  command(0x78);        // OLED characterization: OLED command set disabled (SD=0) (exit from OLED command set)
  command(0x20 | rows); // Function set: fundamental command set (RE=0) (exit from extended command set), lines #
  command(0x01);        // Clear display
  delay(2);             // After a clear display, a minimum pause of 1-2 ms is required
  command(0x80);        // Set DDRAM address 0x00 in address counter (cursor home) (default value)
  command(0x0C);        // Display ON/OFF control: display ON, cursor off, blink off

digitalWrite(CS, HIGH);
  delay(250);           // Waits 250 ms for stabilization purpose after display on

  if (ROW_N == 2)
    new_line[1] = 0xC0;             // DDRAM address for each line of the display (only for 2-line mode)
  Serial.begin(115200); //For performance measurement
}
// _______________________________________________________________________________________

void loop(void)                       // MAIN PROGRAM
{
  digitalWrite(LED_R, HIGH);
  digitalWrite(LED_G, HIGH);
  digitalWrite(LED_B, HIGH);

  sensors.requestTemperatures(); // Send the command to get temperatures
  dtostrf(sensors.getTempCByIndex(0), 20, 10, temp1);
  dtostrf(sensors.getTempCByIndex(1), 20, 10, temp2);

  digitalWrite(CS, LOW);
  output();                          // Execute subroutine "output"
  digitalWrite(CS, HIGH);
  delay(500);                       // Waits, only for visual effect purpose

  digitalWrite(LED_R, HIGH);
  digitalWrite(LED_G, LOW);
  digitalWrite(LED_B, LOW);

  digitalWrite(CS, LOW);
  blocks();                          // Execute subroutine "blocks"
  digitalWrite(CS, HIGH);
  delay(500);                       // Waits, only for visual effect purpose

  digitalWrite(LED_R, LOW);
  digitalWrite(LED_G, HIGH);
  digitalWrite(LED_B, LOW);

  digitalWrite(CS, HIGH);
  output();                          // Execute subroutine "output"
  digitalWrite(CS, LOW);
  delay(500);                       // Waits, only for visual effect purpose

  digitalWrite(LED_R, LOW);
  digitalWrite(LED_G, LOW);
  digitalWrite(LED_B, HIGH);

  digitalWrite(CS, LOW);
  blocks();                          // Execute subroutine "blocks"
  digitalWrite(CS, HIGH);
  delay(500);                       // Waits, only for visual effect purpose
}

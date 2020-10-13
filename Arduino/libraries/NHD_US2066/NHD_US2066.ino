#define NHD_US2066_LOG 1
#include <NHD_US2066.h>

byte TEXT[4][21] = {"1-Newhaven Display--",
                          "2-------Test--------",
                          "3-16/20-Characters--",
                          "4!@#$%^&*()_+{}[]<>?"
};         // Strings to be displayed

NHD_US2066* nhd;

void setup(void) {
  Serial.begin(9600);
  Serial.println("setup");
  NHD_US2066 nhd_tmp = NHD_US2066();
  nhd = &nhd_tmp;
}

void output() {
  for (int i=0 ; i<4 ; i++) {
    nhd->print_row(i, TEXT[i]);
  }
}
byte new_line2[4] = {0x80, 0xA0, 0xC0, 0xE0};//
const byte CS2 = 10;
void blocks(void)                     // SUBROUTINE: FILLS THE ENTIRE DISPLAY WITH THE CHARACTER "BLOCK"
{
  digitalWrite(CS2, LOW);
  byte r = 0;                        // Row index
  byte c = 0;                        // Column index

  nhd->_write_command(0x01);                     // Clear display (and cursor home)
  delay(2);                          // After a clear display, a minimum pause of 1-2 ms is required

  for (r = 0; r < 4; r++)        // One row at a time,
  {
    nhd->_write_command(new_line2[r]);           //  moves the cursor to the first column of that line
    for (c = 0; c < 20; c++)  // One character at a time,
    {
      nhd->_write_data(0xDB);                  //  displays the character 0xDB (block)
      delay(10);                   // Waits, only for visual effect purpose
    }
    delay(100);                     // Waits, only for visual effect purpose
  }
  digitalWrite(CS2, HIGH);
}

void blocks_clear(void) {
  nhd->clear_display();

  for (int r = 0; r < 4; r++) {
    if (r == 0) { nhd->display_on_off(1,1,1); }
    if (r == 1) { nhd->display_on_off(1,0,1); }
    if (r == 2) { nhd->display_on_off(1,0,0); }
    if (r == 3) { nhd->display_on_off(1,1,1); }
    nhd->_move_to_row(r);
    for (int c = 0; c < 20; c++) {
      unsigned char text[] = {0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB};
      nhd->print_row(r, text);
    }
    delay(500);                     // Waits, only for visual effect purpose
  }
  nhd->display_on_off(0,0,0);
  delay(500);
  nhd->display_on_off();
}

void read_text_ok() {
  for (int r = 0; r < 4; r++) {
    unsigned char* row = nhd->read_row(r);
    print_row(row, 20);
    Serial.println();
    for (int c = 0; c < 20; c++)  // One character at a time,
    {
      Serial.write(nhd->read_char(r,c));
      if (row[c] == TEXT[r][c]) { nhd->print_char('%', r, c); }
      else { nhd->print_char('V', r, c); }
      delay(10);                   // Waits, only for visual effect purpose
    }
    Serial.println();
    delay(100);                     // Waits, only for visual effect purpose
  }
}

void print_row(unsigned char row[], int row_length) {
  for (int i=0 ; i<row_length ; i++) {
    Serial.write(row[i]);
  }
}

void double_line() {
  int modes[] = {
    NHD_TWOLINE_MODE_OFF,
    NHD_TWOLINE_MODE_112,
    NHD_TWOLINE_MODE_121,
    NHD_TWOLINE_MODE_22,
    NHD_TWOLINE_MODE_211,
  };
  for (int i=0 ; i<5 ; i++) {
    nhd->double_line_text(modes[i]);
    output();
    delay(1000);
  }
  nhd->double_line_text(NHD_TWOLINE_MODE_OFF);
}

void loop(void) {

  Serial.println("loop");
  double_line();
  blocks();
  output();
  read_text_ok();
  blocks_clear();
  delay(500);
}

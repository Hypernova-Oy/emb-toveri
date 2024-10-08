/*
  NHD_US2066.h - Library for interfacing NHD US2066 chipset OLED displays.
  Created by Olli-Antti Kivilahti 2020-10-08.
*/
#ifndef NHD_US2066_h
#define NHD_US2066_h

#include <Arduino.h>
#include <SPI.h>

#define NHD_TWOLINE_MODE_OFF 0
#define NHD_TWOLINE_MODE_112 1
#define NHD_TWOLINE_MODE_121 2
#define NHD_TWOLINE_MODE_22  3
#define NHD_TWOLINE_MODE_211 4

class NHD_US2066
{
  public:
    NHD_US2066();
    void clear_display(void);
    void display_on_off(bool on = 1, bool cursor = 0, bool blink = 0);
    void double_line_text(int mode);
    void print_char(char c, int row_idx, int col_idx);
    void print_row(int row_idx, char[]);
    char read_char(int row_idx, int col_idx);
    char* read_row(int row_idx);
    char* read_row(int row_idx, char[]);

    char _read_command(char c);
    char _read_data(void);
    void _write_command(char cmd);
    void _write_data(char data);
    void _move_cursor_to_pos(int row_idx, int col_idx);
    void _move_to_row(int row_idx);
    char _read_byte(void);
    void _send_byte(char tx_b);
    void _slave_select(void);
    void _slave_release(void);
    char _start_byte(bool dc, bool rw);

  private:
    char* _row;
};

#endif

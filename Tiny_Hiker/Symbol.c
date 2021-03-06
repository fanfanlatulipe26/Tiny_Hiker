/*
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
// Symbol.c
// Font type    : Symbol
// hPa m °C mV up_arrow down_arrow
// Font size    : 16x12 pixels. (24 bytes). 
// Memory usage : 

#include <avr/pgmspace.h>

const uint8_t Symbol[] PROGMEM={
  0x00, 0x00, 
  0x00, 0x00, 
  0x21, 0xc0, 
  0x21, 0x20, 
  0x21, 0x20, 
  0x21, 0x26, 
  0x21, 0x29, 
  0x39, 0xc1, 
  0x25, 0x07, 
  0x25, 0x09, 
  0x25, 0x09, 
  0x25, 0x07, // hPa

  0x33, 0x8e, 
  0x37, 0xdf, 
  0x3c, 0xe3, 
  0x38, 0xe3, 
  0x30, 0xc3, 
  0x30, 0xc3, 
  0x30, 0xc3, 
  0x30, 0xc3, 
  0x30, 0xc3, 
  0x30, 0xc3, 
  0x30, 0xc3, 
  0x30, 0xc3,  // m

  0x78, 0x3c, 
  0xcc, 0x66, 
  0xcc, 0xc3, 
  0xcc, 0xc3, 
  0xcc, 0xc0, 
  0x78, 0xc0, 
  0x00, 0xc0, 
  0x00, 0xc0, 
  0x00, 0xc3, 
  0x00, 0xc3, 
  0x00, 0x66, 
  0x00, 0x3c, // °C

//  0x00, 0x00, 
//  0x01, 0x83, 
//  0x01, 0x83, 
//  0x00, 0xc6, 
//  0x00, 0xc6, 
//  0x00, 0xc6, 
//  0x00, 0x6c, 
//  0xec, 0x6c, 
//  0xfe, 0x6c, 
//  0xd6, 0x38, 
//  0xd6, 0x38, 
//  0xd6, 0x38, 
//  0x00, 0x00, 
//  0x00, 0x00, 
//  0x00, 0x00, 
//  0x00, 0x00, // mV

  0x00, 0x00, 
  0x01, 0x83, 
  0x01, 0x83, 
  0x00, 0xc6, 
  0x00, 0xc6, 
  0x00, 0xc6, 
  0x00, 0x6c, 
  0x00, 0x6c, 
  0x00, 0x6c, 
  0x00, 0x38, 
  0x00, 0x38, 
  0x00, 0x38, // V

  0x01, 0x00, 
  0x03, 0x80, 
  0x07, 0xc0, 
  0x0f, 0xe0, 
  0x1f, 0xf0, 
  0x3f, 0xf8, 
  0x7f, 0xfc, 
  0xff, 0xfe, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, // fleche haut

  
  0xff, 0xfe, 
  0x7f, 0xfc, 
  0x3f, 0xf8, 
  0x1f, 0xf0, 
  0x0f, 0xe0, 
  0x07, 0xc0, 
  0x03, 0x80, 
  0x01, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x00, 0x00,  // fleche bas
};

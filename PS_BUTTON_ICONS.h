/*
  Cole L - 1st Jan 2024 - https://github.com/cole8888/

  Adafruit-GFX font containing Playstation controller button icons.
  Followed this guide: https://learn.adafruit.com/creating-custom-symbol-font-for-adafruit-gfx-library
*/

const uint8_t PlaystationButtonSymbolsBitmaps[] PROGMEM = {
  //00 Triangle
  /*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
  /*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
  /*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . . . X . , . . X . . . . . |*/ 0x04, 0x20,
  /*| . . . . . X . , . . X . . . . . |*/ 0x04, 0x20,
  /*| . . . . X . . , . . . X . . . . |*/ 0x08, 0x10,
  /*| . . . . X . . , . . . X . . . . |*/ 0x08, 0x10,
  /*| . . . X . . . , . . . . X . . . |*/ 0x10, 0x08,
  /*| . . . X X X X X X X X X X . . . |*/ 0x1f, 0xf8,

  //01 Circle
  /*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
  /*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xc0,
  /*| . . . . . X . , . . X . . . . . |*/ 0x04, 0x20,
  /*| . . . . X . . , . . . X . . . . |*/ 0x08, 0x10,
  /*| . . . X . . . , . . . . X . . . |*/ 0x10, 0x08,
  /*| . . . X . . . , . . . . X . . . |*/ 0x10, 0x08,
  /*| . . . X . . . , . . . . X . . . |*/ 0x10, 0x08,
  /*| . . . X . . . , . . . . X . . . |*/ 0x10, 0x08,
  /*| . . . . X . . , . . . X . . . . |*/ 0x08, 0x10,
  /*| . . . . . X . , . . X . . . . . |*/ 0x04, 0x20,
  /*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xc0,

  //02 Cross
  /*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
  /*| . . . X . . . , . . . . X . . . |*/ 0x10, 0x08,
  /*| . . . . X . . , . . . X . . . . |*/ 0x08, 0x10,
  /*| . . . . . X . , . . X . . . . . |*/ 0x04, 0x20,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
  /*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . . . X . , . . X . . . . . |*/ 0x04, 0x20,
  /*| . . . . X . . , . . . X . . . . |*/ 0x08, 0x10,
  /*| . . . X . . . , . . . . X . . . |*/ 0x10, 0x08,

  //03 Square
  /*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
  /*| . . . X X X X X X X X X X . . . |*/ 0x1f, 0xf8,
  /*| . . . X . . . , . . . . X . . . |*/ 0x10, 0x08,
  /*| . . . X . . . , . . . . X . . . |*/ 0x10, 0x08,
  /*| . . . X . . . , . . . . X . . . |*/ 0x10, 0x08,
  /*| . . . X . . . , . . . . X . . . |*/ 0x10, 0x08,
  /*| . . . x . . . , . . . . X . . . |*/ 0x10, 0x08,
  /*| . . . X . . . , . . . . X . . . |*/ 0x10, 0x08,
  /*| . . . X . . . , . . . . X . . . |*/ 0x10, 0x08,
  /*| . . . X . . . , . . . . X . . . |*/ 0x10, 0x08,
  /*| . . . X X X X X X X X X X . . . |*/ 0x1f, 0xf8,

  //04 Dpad Up
  /*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
  /*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xc0,
  /*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xc0,
  /*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xc0,
  /*| . . . X X X . X X . X X X . . . |*/ 0x1d, 0xb8,
  /*| . . . X . . X , . X . . X . . . |*/ 0x12, 0x48,
  /*| . . . X . . X , . X . . X . . . |*/ 0x12, 0x48,
  /*| . . . X X X . X X . X X X . . . |*/ 0x1d, 0xb8,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xc0,

  //05 Dpad Right
  /*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
  /*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xc0,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . X X X . X X . X X X . . . |*/ 0x1d, 0xb8,
  /*| . . . X . . X , . X X X X . . . |*/ 0x12, 0x78,
  /*| . . . X . . X , . X x X X . . . |*/ 0x12, 0x78,
  /*| . . . X X X . X X . X X X . . . |*/ 0x1d, 0xb8,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xc0,

  //06 Dpad Down
  /*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
  /*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xc0,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . X X X . X X . X X X . . . |*/ 0x1d, 0xb8,
  /*| . . . X . . X , . X . . X . . . |*/ 0x12, 0x48,
  /*| . . . X . . X , . X . . X . . . |*/ 0x12, 0x48,
  /*| . . . X X X . X X . X X X . . . |*/ 0x1d, 0xb8,
  /*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xc0,
  /*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xc0,
  /*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xc0,

  //07 Dpad Left
  /*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
  /*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xc0,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . X X X . X X . X X X . . . |*/ 0x1d, 0xb8,
  /*| . . . X X X X , . X . . X . . . |*/ 0x1e, 0x48,
  /*| . . . X X X X , . X . . X . . . |*/ 0x1e, 0x48,
  /*| . . . X X X . X X . X X X . . . |*/ 0x1d, 0xb8,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xc0,

  //08 Dpad None
  /*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
  /*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xc0,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . X X X . X X . X X X . . . |*/ 0x1d, 0xb8,
  /*| . . . X . . X , . X . . X . . . |*/ 0x12, 0x48,
  /*| . . . X . . X , . X . . X . . . |*/ 0x12, 0x48,
  /*| . . . X X X . X X . X X X . . . |*/ 0x1d, 0xb8,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . . . . X , . X . . . . . . |*/ 0x02, 0x40,
  /*| . . . . . . X X X X . . . . . . |*/ 0x03, 0xc0,

  // 09 PS Button
  /*| 8 4 2 1 8 4 2 1 8 4 2 1 8 4 2 1 |*/
  /*| . . . . . . X X X . . . . . . . |*/ 0x03, 0x80,
  /*| . . . . . . X X . X . . . . . . |*/ 0x03, 0x40,
  /*| . . . . . . X X . X X . . . . . |*/ 0x03, 0x60,
  /*| . . . . . . X X . X X . . . . . |*/ 0x03, 0x60,
  /*| . . . . . X X X . X . . X X . . |*/ 0x07, 0x4c,
  /*| . . X X X . X X . . X X . . X X |*/ 0x3b, 0x33,
  /*| . X X . . . X X X X . . . X X . |*/ 0x63, 0xc6,
  /*| X X . . . X X X . . . X X . . . |*/ 0xc7, 0x18,
  /*| . X X X X . X X . X X X . . . . |*/ 0x7b, 0x70,
  /*| . . . . . . . X X . . . . . . . |*/ 0x01, 0x80
};

const GFXglyph PlaystationButtonSymbolsGlyphs[] PROGMEM = {
  // Index, W, H, xAdv, dX, dY
  { 0, 16, 10, 12, -2, -8 },    // 00 Circle
  { 20, 16, 10, 12, -2, -8 },   // 01 Cross
  { 40, 16, 10, 12, -2, -8 },   // 02 Triangle
  { 60, 16, 10, 12, -2, -8 },   // 03 Square
  { 80, 16, 10, 12, -2, -8 },   // 04 Dpad Up
  { 100, 16, 10, 12, -2, -8 },  // 05 Dpad Right
  { 120, 16, 10, 12, -2, -8 },  // 06 Dpad Down
  { 140, 16, 10, 12, -2, -8 },  // 07 Dpad Left
  { 160, 16, 10, 12, -2, -8 },  // 08 Dpad None
  { 180, 16, 10, 18, 1, -8 }    // 09 PS
};

const GFXfont PlaystationButtonSymbols PROGMEM = {
  (uint8_t *)PlaystationButtonSymbolsBitmaps,
  (GFXglyph *)PlaystationButtonSymbolsGlyphs,
  0, 9, 11  //ASCII start, ASCII stop, Y Advance
};

enum PS_SYMBOLS {
  TRIANGLE_BUTTON_ICON,
  CIRCLE_BUTTON_ICON,
  CROSS_BUTTON_ICON,
  SQUARE_BUTTON_ICON,
  DPAD_UP_BUTTON_ICON,
  DPAD_RIGHT_BUTTON_ICON,
  DPAD_DOWN_BUTTON_ICON,
  DPAD_LEFT_BUTTON_ICON,
  DPAD_NONE_BUTTON_ICON,
  PS_BUTTON_ICON
};

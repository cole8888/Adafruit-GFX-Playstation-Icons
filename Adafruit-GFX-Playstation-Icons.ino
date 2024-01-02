/*
  Cole L - 1st Jan 2024 - https://github.com/cole8888/

  Example program to demo the Playstation button icons on an SSD1306 OLED display.
*/

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "PS_BUTTON_ICONS.h"

#define SCREEN_WIDTH 128  // OLED display width, in pixels
#define SCREEN_HEIGHT 64  // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Draw an icon at a given location on the display.
void drawPlaystationSymbol(int16_t x, int16_t y, PS_SYMBOLS id, uint8_t size = 1) {
  display.setFont(&PlaystationButtonSymbols);
  display.drawChar(x, y, id, WHITE, BLACK, size);
  display.setFont();  // Reset to the default font.
}

// Print out an icon at the current cursor location.
void printPlaystationSymbol(PS_SYMBOLS id, bool newLine = false) {
  display.setFont(&PlaystationButtonSymbols);
  newLine ? display.println((char)id) : display.print((char)id);
  display.setFont();  // Reset to the default font.
}

/*
* If a line contains a printed icon that isn't at the end / uses the newLine argument,
* the Y advance value of the default font will be used and cause overlap.
* 
* Use this function to print out the newLine instead.
*
* Eg:
* printPlaystationSymbol(PS_BUTTON_ICON);
* display.print("abc");
* newLineForLineContainingIcon();
*/
void newLineForLineContainingIcon() {
  display.setFont(&PlaystationButtonSymbols);
  display.println();
  display.setFont();  // Reset to the default font.
}

void setup() {
  Serial.begin(115200);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 Error"));
    for (;;)
      ;
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 2);  // If showing icons on first line, need extra room.

  display.print("PS:");
  printPlaystationSymbol(PS_BUTTON_ICON, true);
  display.print("Triangle:");
  printPlaystationSymbol(TRIANGLE_BUTTON_ICON);
  display.print(" Circle:");
  printPlaystationSymbol(CIRCLE_BUTTON_ICON, true);
  display.print("Cross:");
  printPlaystationSymbol(CROSS_BUTTON_ICON);
  display.print(" Square:");
  printPlaystationSymbol(SQUARE_BUTTON_ICON, true);

  display.print("Dpad:");
  printPlaystationSymbol(DPAD_UP_BUTTON_ICON);
  printPlaystationSymbol(DPAD_RIGHT_BUTTON_ICON);
  printPlaystationSymbol(DPAD_DOWN_BUTTON_ICON);
  printPlaystationSymbol(DPAD_LEFT_BUTTON_ICON);
  printPlaystationSymbol(DPAD_LEFT_BUTTON_ICON);
  printPlaystationSymbol(DPAD_NONE_BUTTON_ICON);

  display.display();
}

void loop() {
}

#include "display.h"

TFT_eSPI tft = TFT_eSPI();

//Initialize the display such that:
//It is horizontally oriented
//The display color is initialized to orange

void initDisplay(){
    tft.init();
    tft.setRotation(1);
    tft.fillScreen(TFT_ORANGE);
}
void setDisplayColor(uint16_t color){
    tft.fillScreen(color);
}

void cycleDisplayColor(){
    uint16_t colors[17] = {
        TFT_BLACK,       // 0x0000
        TFT_NAVY,        // 0x000F
        TFT_DARKGREEN,   // 0x03E0
        TFT_DARKCYAN,    // 0x03EF
        TFT_MAROON,      // 0x7800
        TFT_PURPLE,      // 0x780F
        TFT_OLIVE,       // 0x7BE0
        TFT_LIGHTGREY,   // 0xC618
        TFT_DARKGREY,    // 0x7BEF
        TFT_BLUE,        // 0x001F
        TFT_GREEN,       // 0x07E0
        TFT_CYAN,        // 0x07FF
        TFT_RED,         // 0xF800
        TFT_MAGENTA,     // 0xF81F
        TFT_YELLOW,      // 0xFFE0
        TFT_WHITE,       // 0xFFFF
        TFT_ORANGE,      // 0xFD20
    };
    static int num = 0;
    tft.fillScreen(colors[num]);
    delay(500);
    num = (num + 1) % 16;
}

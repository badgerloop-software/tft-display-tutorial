#include "display.h"

//Initialize the display such that:
//It is horizontally oriented
//The display color is initialized to orange
TFT_eSPI tft = TFT_eSPI();
void initDisplay(){
    tft.begin();
    tft.setRotation(1);
    tft.fillScreen(0xFD20);
}

void setDisplayColor(uint16_t color){
    tft.fillScreen(color);
}
uint16_t colors[] = {TFT_RED, TFT_GREEN, TFT_BLUE, TFT_YELLOW, TFT_CYAN, TFT_MAGENTA};
void cycleDisplayColor(){

    static uint8_t colorIndex = 0;

    tft.fillScreen(colors[colorIndex]);
    colorIndex = (colorIndex + 1) % (sizeof(colors) / sizeof(colors[0]));
}

#include "display.h"
#include <TFT_eSPI.h>
TFT_eSPI tft = TFT_eSPI(); 

//Initialize the display such that:
//It is horizontally oriented
//The display color is initialized to orange
void initDisplay(){
    tft.begin();
    tft.setRotation(1); //Set the display orientation to horizontal
    tft.fillScreen(TFT_ORANGE); 

}

void setDisplayColor(uint16_t color){
    tft.fillScreen(color); 
}

void cycleDisplayColor(){
   tft.fillScreen(TFT_BLACK);
    delay(1000);
    tft.fillScreen(TFT_NAVY);
    delay(1000);
    tft.fillScreen(TFT_DARKGREEN);
    delay(1000);
    tft.fillScreen(TFT_DARKCYAN);
    delay(1000);
    tft.fillScreen(TFT_MAROON);
    delay(1000);
    tft.fillScreen(TFT_PURPLE);
    delay(1000);
    tft.fillScreen(TFT_OLIVE);
    delay(1000);
    tft.fillScreen(TFT_LIGHTGREY);
    delay(1000);
    tft.fillScreen(TFT_DARKGREY);
    delay(1000);
    tft.fillScreen(TFT_BLUE);
    delay(1000);
    tft.fillScreen(TFT_GREEN);
    delay(1000);
    tft.fillScreen(TFT_CYAN);
    delay(1000);
    tft.fillScreen(TFT_RED);
    delay(1000);
    tft.fillScreen(TFT_MAGENTA);

}

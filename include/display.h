#ifndef __DISPLAY_H__
#define __DISPLAY_H__

#include <SPI.h>
#include <TFT_eSPI.h>
#include <Arduino.h>

TFT_eSPI tft;

void initDisplay();
void setDisplayColor(uint16_t color);
void cycleDisplayColor();

#endif // __DISPLAY_H__


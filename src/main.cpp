#include <Arduino.h>
#include "display.h"

void setup() {
  Serial.begin(115200);

  Serial.println("Hello World");

  //Other setup code to initialize everything relevant
  initDisplay();
}

void loop() {
  setDisplayColor(TFT_SKYBLUE);
  delay(2000);
  while(1)
    cycleDisplayColor();
}
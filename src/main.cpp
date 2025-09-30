#include <Arduino.h>
#include "display.h"


void setup() {
  Serial.begin(115200);

  Serial.println("Hello World");

  //Other setup code to initialize everything relevant
  initDisplay();
  setDisplayColor(0x07E0);
  delay(3000);
}

void loop() {
  cycleDisplayColor();
  delay(3000);

}
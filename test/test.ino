#include <Adafruit_NeoPixel.h>

#define ledPin A4
#define ledCount 35

Adafruit_NeoPixel strip(ledCount, ledPin, NEO_GRB + NEO_KHZ800);


void setup() {
  strip.clear();
  strip.begin();

}

void loop() {
  strip.fill(strip.Color(255,0,0));
  strip.show();
  delay(1000);

}

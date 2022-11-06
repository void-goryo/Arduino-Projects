#include <Adafruit_NeoPixel.h>

#define LED_PIN A4
#define LED_COUNT 42
#define Purple 255,0,255

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  strip.begin();
  strip.clear();
}

void loop() {


  /*for(int i = 0; i <= LED_COUNT; i++){
    fade(i);
  }*/

  trail();
}

void fade(int led) {

for(int x = 256; x >= 0; x -= 16){

    strip.setPixelColor(led, strip.Color(x, 0, x));
    //delay(10);
    strip.show();

  }
}


void trail(){

  int x = 0;
  int y = 1;
  int z = 2;

  strip.setPixelColor(x, strip.Color(Purple));
  strip.show();
  delay(10);
  strip.setPixelColor(y, strip.Color(Purple));
  strip.show();
  delay(10);
  strip.setPixelColor(z, strip.Color(Purple));
  delay(10);
  strip.show();

  while(z < LED_COUNT){

    if(x < z){
      fade(x);
      x = z + 1;
      strip.setPixelColor(x, strip.Color(Purple));
      strip.show();
    }

    if(y < x){
      fade(y);
      y = x + 1;
      strip.setPixelColor(y, strip.Color(Purple));
      strip.show();
    }

    if(z < y){
      fade(z);
      z = y + 1;
      strip.setPixelColor(z, strip.Color(Purple));
      strip.show();
    }
  }
  delay(100);


}






#include <Adafruit_NeoPixel.h>

#define LED_PIN A4
#define LED_COUNT 35
#define White 255,255,255

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.clear();
  for(int i = 35; i >= 0; i--){
    strip.setPixelColor(i, strip.Color(White));
    delay(30);
    strip.show();
  }
  delay(1000);
  for(int i = 255; i > 0; i--){
    strip.fill(strip.Color(i, i, 255));
    strip.show();
  }
  delay(50);

}


void loop() {
 rainbow();

}

void rainbow() {
  int c = 0;
  int i = 0;
  int x = 0;
  int y = 0;
  int z = 255;

  while(c == 0){
    while(i == 0){
      strip.fill(strip.Color(x,y,z),0,100);
      strip.show();
      delay(10);
      z--;
      x++;
      if(x == 255){
        i++;
      }
    }

    while(i == 1){
      strip.fill(strip.Color(x,y,z),0,100);
      strip.show();
      delay(10);
      x--;
      y++;
      if(y == 255){
        i++;
      }
    }

    while(i == 2){
      strip.fill(strip.Color(x,y,z),0,100);
      strip.show();
      delay(10);
      y--;
      z++;
      if(z == 255){
        i = 0;
      }
    }
  }
}

#include <Adafruit_NeoPixel.h>

#define LED_PIN A4
#define LED_COUNT 42
#define Purple 255,0,255

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  strip.begin();
  strip.setBrightness(50);
}

void loop() {

  strip.clear();

  /*for(int i = 0; i <= LED_COUNT; i++){
    intro(i);
  }*/
  intro(0);
  intro(1);
  intro(2);
  intro(3);

  trail();

  delay(20);

}

void intro(int led) {

for(int x = 0; x <= 256; x += 1){

    strip.setPixelColor(led, strip.Color(0, 0, x));
    //delay(5);
    strip.show();

  }

  strip.setPixelColor(led, strip.Color(0,0,255));
  strip.show();


}

void fade(int led) {

for(int x = 256; x >= 0; x -= 2){

    strip.setPixelColor(led, strip.Color(0, 0, x));
    //delay(10);
    strip.show();

  }
}


void trail(){

  int x = 0;
  int y = 1;
  int z = 2;
  int a = 3;
  int c = 0;

  while(0 == 0){

    while(c == 0){

      if(x < a){
        fade(x);
        x = a + 1;
        intro(x);
      }

      if(y < x){
        fade(y);
        y = x + 1;
        intro(y);
      }

      if(z < y){
        fade(z);
        z = y + 1;
        intro(z);
      }

      if(a < z){
        fade(a);
        a = z + 1;
        intro(a);
      }

      if(a >= 41){
        c = 1;
        break;
      }
    }

    while(c == 1){

      if(x > a){
        fade(x);
        x = a - 1;
        intro(x);
      }

      if(y > x){
        fade(y);
        y = x - 1;
        intro(y);
      }

      if(z > y){
        fade(z);
        z = y - 1;
        intro(z);
      }

      if(a > z){
        fade(a);
        a = z - 1;
        intro(a);
      }

      if(x <= 0){
        c = 0;
        break;
      
      }
    }
  }

}

void shift(){

  int red = 255;
  int green = 0;
  int blue = 0;

  while(0==0){

    for(int x = 0; x <= 6; x++){

      strip.setPixelColor(x, strip.Color(red, green, blue));

      strip.setPixelColor((x + 7), strip.Color(red, green, blue));

      strip.setPixelColor((x + 14), strip.Color(red, green, blue));

      strip.setPixelColor((x + 21), strip.Color(red, green, blue));

      strip.setPixelColor((x + 28), strip.Color(red, green, blue));

      strip.setPixelColor((x + 35), strip.Color(red, green, blue));

      strip.show();

      delay(200);

      strip.clear();

      if(red < blue){
        blue = 0;
        red = 255;
      }
      else if(green == red){
        red = 0;
        green = 0;
        blue = 255;

      }
      else if(green < red){
        green = 255;
        blue = 255;
      }
    }

  }


}


void dither(){



}



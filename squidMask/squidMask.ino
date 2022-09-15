#include <Adafruit_NeoPixel.h>

//all values are going to be usefull later to define
//where the leds are going to be controlled
//may be an idea later, but maybe add different themes
#define ledPin A4
#define ledCount 100
#define white strip.Color(255,255,255)

Adafruit_NeoPixel strip(ledCount, ledPin, NEO_GRB + NEO_KHZ800);//you may need to change to NEO_RGB



void setup() {

  strip.begin();
  strip.setBrightness(25);
  delay(500);
  rainbow();

}

void loop() {
  // syntax: Library functionName(ledCount, ledPin, type of rgb, khz)
  // syntax: method.setPixelColor(led, r, g, b, w)
  // method.show() updates method
  // method.setBrightness self explanitory

  /*if(digitalRead(2) == HIGH){
    //initial;
    strip.clear();
    rainbow();
  }
  if(digitalRead(3) == HIGH) {
    //initial;
    strip.clear();
    basic();
  }*/

}

void basic() {
  //this is going to be the glitch setup and will run upon startup
  //initial
  strip.fill(white); //color, starting led, ending led
  strip.show();
  
}


void rainbow() {
  int c = 0;
  int i = 0;
  int x = 0;
  int y = 0;
  int z = 0;

  while(z < 255){
    strip.fill(strip.Color(x,y,z),0,100);
    strip.show();
    delay(10);
    z++;
  }

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





#include <Adafruit_NeoPixel.h>

//all values are going to be usefull later to define
//where the leds are going to be controlled
//may be an idea later, but maybe add different themes
#define ledPin A4
#define ledCount 8

Adafruit_NeoPixel strip(ledCount, ledPin, NEO_GRB + NEO_KHZ800);//you may need to change to NEO_RGB



void setup() {
  //pinMode(2, INPUT);
  //pinMode(3, INPUT);
  strip.clear();
  strip.begin();
  strip.setBrightness(255); //This is only for dev. remove when finished
}

void loop() {
  // syntax: Library functionName(ledCount, ledPin, type of rgb, khz)
  // syntax: method.setPixelColor(led, (r, g, b))
  // method.show() updates method
  
  test();
  
}

void basic() {
  //this is going to be the glitch setup and will run upon startup
  //DO NOT USE SETBRIGHTNESS
  //initial
  int w = 255;
  int glitch = random(5);
  int i = 0;
  int j = 0;

  randomSeed(analogRead(0));
  strip.fill(strip.Color(w,w,w)); //color, starting led, ending led
  strip.show();

  delay(random(50,1000));

  if(glitch == 1){
    while(i == 0){
      strip.fill(strip.Color(w,w,w));
      strip.show();

      j++;
      delay(20);
      if(j == 100){
        i++;
      }
    }
  }
  
}


void rainbow() {
  int c = 0;
  int i = 0;
  int x = 0;
  int y = 0;
  int z = 0;

  while(z < 255){
    strip.fill(strip.Color(x,y,z),0,5);
    strip.show();
    delay(10);
    z++;
  }

  while(c == 0){
    while(i == 0){
      strip.fill(strip.Color(x,y,z),0,5);
      strip.show();
      delay(10);
      z--;
      x++;
      if(x == 255){
        i++;
      }
    }

    while(i == 1){
      strip.fill(strip.Color(x,y,z),0,5);
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

void test(){

  int colorPos = random(6);
  int pos3 = strip.getPixelColor(3);
  int colorVal = strip.getPixelColor(colorPos);

  strip.setPixelColor(3, strip.Color(255, 255, 255));
  strip.show();

  while(0 == 0){
    colorPos = random(6);

    if(pos3 == (255, 255, 255)){
      
    }
  }

}





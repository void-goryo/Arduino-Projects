#include <Adafruit_NeoPixel.h>

//all values are going to be usefull later to define
//where the leds are going to be controlled
//may be an idea later, but maybe add different themes
#define ledPin A1
#define ledCount 100

Adafruit_NeoPixel strip(ledCount, ledPin, NEO_GRB + NEO_KHZ800);//you may need to change to NEO_RGB



void setup() {

  strip.begin();
  strip.setBrightness(100);
  trianglefunc();

}

void loop() {
  // syntax: Library functionName(ledCount, ledPin, type of rgb, khz)
  // syntax: method.setPixelColor(led, r, g, b, w)
  // method.show() updates method
  // method.setBrightness self explanitory

  //pre-defining possible ports for a big if else statment
  int triangle = A0;
  int rainbow = A1;

  if(digitalRead(rainbow) == HIGH){
    //initial;
    strip.clear();
    //rainbowfunc();
  }
  if(digitalRead(triangle) == HIGH) {
    //initial;
    strip.clear();
    trianglefunc();
  }

}

void trianglefunc() {
  //this is going to be the glitch setup and will run upon startup
  //initial
  strip.fill(strip.Color(255,255,255,0),0,100); //color, starting led, ending led
  strip.show();
  
}
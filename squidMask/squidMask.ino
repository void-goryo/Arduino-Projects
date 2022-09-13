#include <Adafruit_NeoPixel.h>

//god you need to fix the Adafruit_NeoPixel problem soon. It's ok for now, just ugly to look at.

void setup() {
  //all values are going to be usefull later to define
  //where the leds are going to be controlled
  //may be an idea later, but maybe add different themes
  #define ledPin A1
  #define ledCount 100

  #define initial Adafruit_NeoPixel strip(ledCount, ledPin, NEO_GRB + NEO_KHZ800);//you may need to change to NEO_RGB
  initial

  strip.begin();
  strip.show();
  strip.setBrightness(100);

}

void loop() {
  // syntax: Library functionName(ledCount, ledPin, type of rgb, khz)
  // syntax: method.setPixelColor(led, r, g, b, w)
  // method.show() updates method
  // method.setBrightness self explanitory

  //pre-defining possible ports for a big if else statment
  int basic = A0;
  int rainbow = A1;

  //starting giant if else statment to detect what function to run
  triangle();

  if(digitalRead(rainbow) == HIGH){
    initial;
    strip.clear();
    //rainbowfunc();
  }
  if(digitalRead(basic) == HIGH) {
    initial;
    strip.clear();
    triangle();
  }

}

void triangle() {
  //this is going to be the glitch setup and will run upon startup
  initial
  strip.fill(strip.Color(255,255,255,0),0,100); //color, starting led, ending led
  strip.show();
  
}

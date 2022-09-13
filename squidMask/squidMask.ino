#include <Adafruit_NeoPixel.h>

void setup() {
  //all values are going to be usefull later to define
  //where the leds are going to be controlled
  //may be an idea later, but maybe add different themes
  #define ledPin 1
  #define ledCount 100

}

void loop() {
  // syntax: Library functionName(ledCount, ledPin, type of rgb, khz)
  // syntax: method.setPixelColor(led, r, g, b, w)
  // method.show() updates method
  // method.setBrightness self explanitory

  //pre-defining possible ports for a big if else statment
  int default A0
  int rainbow A1

  //starting giant if else statment to detect what function to run
  default();

  if(digitalRead(rainbow) == HIGH){
    rainbow();
  }
  if {
    default();
  }

}

void default() {

  //this is going to be the glitch setup and will run upon startup
  Adafruit_NeoPixel strip(ledCount, ledPin, NEO_GRB, NEO_KHZ800); //you may need to change to NEO_RGB
  strip.begin();
  strip.setBrightness(100);
  strip.fill(Color(255,255,255,0),0,100) //color, starting led, ending led
  strip.show();
  
}

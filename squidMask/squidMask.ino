#include <Adafruit_NeoPixel.h>

//all values are going to be usefull later to define
//where the leds are going to be controlled
//may be an idea later, but maybe add different themes
#define ledPin A4
#define ledCount 100
#define white 255, 255, 255
#define off 0,0,0

Adafruit_NeoPixel strip(ledCount, ledPin, NEO_GRB + NEO_KHZ800);//you may need to change to NEO_RGB



void setup() {
  //pinMode(2, INPUT);
  //pinMode(3, INPUT);
  strip.begin();
  strip.setBrightness(255); //This is only for dev. remove when finished
}

void loop() {
  // syntax: Library functionName(ledCount, ledPin, type of rgb, khz)
  // syntax: method.setPixelColor(led, (r, g, b))
  // method.show() updates method
  strip.clear();
  
  test();
  //delay(1);
  
}

void basic() {
  //this is going to be the glitch setup and will run upon startup
  //DO NOT USE SETBRIGHTNESS
  strip.clear();
  //initial var
  int glitch = random(10);
  int i = 0;
  int j = 0;
  //logic var
  int pos3 = strip.getPixelColor(3);
  int colorPosR1 = random(6);
  int colorPosR2 = random(7,13);
  int colorVar = strip.getPixelColor(colorPosR1);

  randomSeed(analogRead(0));
  strip.fill(strip.Color(off));
  strip.setPixelColor(3, strip.Color(white)); //color, starting led, ending led
  strip.setPixelColor(9, strip.Color(white)); //color, starting led, ending led
  strip.setPixelColor(11, strip.Color(white)); //color, starting led, ending led
  strip.show();

  delay(random(50));

  if(glitch == 0){
    if(colorPosR1 == 2 || colorPosR1 == 4){
      
      row1(colorPosR1);

    }
  }
}

void row1(int pos){
  strip.clear();

  int ledNum = random(6);
  int leds[ledNum] = {};
  int j = 0;
  int i = 0;
  int l = ledNum;
    while(0 == 0){
      //rng for what leds are assigned values
      for(int c = 0; c <= ledNum; c++){
        if(random(2) == 0){
          leds[l] = c;
          l--;
        }
      }
      for(int c = leds[0]; c <= ledNum; c++){
        int x = leds[c];
        strip.setPixelColor(leds[x], strip.Color(white));
        strip.show();
        delay(25);
      
        while(0 == 0){
          //first for loop is to turn the leds off
          for(int g = leds[0]; g <= ledNum; g++){
            int a = leds[g];
            strip.setPixelColor(leds[a], strip.Color(off));
          }
          strip.show();
          //second for loop for turning leds on
          for(int g = leds[0]; g <= ledNum; g++){
            int a = leds[g];
            strip.setPixelColor(leds[a], strip.Color(white));
          }
          strip.show();
          j++;
          if(j >= random(500,1000)){
            break;
          }
            
        }
      }
      break;
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


//use this to experiment to prevent having to revert to a previous commit
void test(){

  /*for(int i = 0; i <= 14; i++){
    strip.setPixelColor(i, strip.Color(255,0,0));
    strip.show();
    delay(500);
    strip.setPixelColor(i, strip.Color(0,255,0));
    strip.show();
    delay(500);
    strip.setPixelColor(i, strip.Color(0,0,255));
    strip.show();
    delay(500);
    strip.setPixelColor(i, strip.Color(0,0,0));
    strip.show();
    delay(500);
  }*/
  strip.setPixelColor(13, strip.Color(255,255,255));
  strip.show();

}





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
  
<<<<<<< HEAD
  //delay(1);
=======
  test();
>>>>>>> parent of a75177e (Update squidMask.ino)
  
}

void basic() {
  //this is going to be the glitch setup and will run upon startup
  //DO NOT USE SETBRIGHTNESS
<<<<<<< HEAD
  strip.clear();
  //initial var
  int glitch = random(9);
=======
  //initial
  int w = 255;
  int glitch = random(5);
>>>>>>> parent of a75177e (Update squidMask.ino)
  int i = 0;
  int j = 0;


  //this is just an ugly block that sets leds to their default state
  randomSeed(analogRead(0));
<<<<<<< HEAD
  strip.setPixelColor(3, strip.Color(white)); //color, starting led, ending led
  strip.setPixelColor(9, strip.Color(white)); //color, starting led, ending led
  strip.setPixelColor(11, strip.Color(white)); //color, starting led, ending led
  strip.show();

  //this is be a higher delay when finished. I'm thinking about 500 or 1000 just to keep it *spooky*
  delay(random(50));

  if(glitch == 0){
    int numRow = random(2);

    if(numRow == 0){

      int r1 = random(6);
      distort(r1);
=======
  strip.fill(strip.Color(w,w,w)); //color, starting led, ending led
  strip.show();

  delay(random(50,1000));

  if(glitch == 1){
    while(i == 0){
      strip.fill(strip.Color(w,w,w));
      strip.show();
>>>>>>> parent of a75177e (Update squidMask.ino)

      j++;
      delay(20);
      if(j == 100){
        i++;
      }
    }
    //these next two are cool
    else if(numRow == 1){

      int r1 = random(6);
      int r2 = random(6);

      //catches r2 if it's the same as r1. This way we can prevent repitition and unwanted glitchs (kinda funny huh)
      while(r2 == r1){

        r2 = random(6);

      }
      distort(r1, r2);

    }

    else if(numRow == 2){
      
      int r1 = random(6);
      int r2 = random(6);
      int r3 = random(6);

      //these two do the same thing, just twice
      while(r2 == r1){

        r2 = random(6);

      }

      //this goes off of r2
      while(r3 == r2 || r3 == r1){

        r3 = random(6);

      }
      distort(r1, r2, r3);

    }

  }
  
}

<<<<<<< HEAD


void distort(int r1){

  //clearing the current function so this one can run
  strip.clear();
  //variables =^. .^=
  int j = 0;
  int leds[random(6)];


  //1 2 3 4 5 6 7
  //_ _   _   _

  //1 2 3 4 5 6 7
  //    _   _





  //looks for the position of leds based on row and starts itterating threw the leds
  for(int i = (r1*7); i <= ((r1*7)+sizeof(leds)); i++){
    leds[i] = random(6);
  }

}

void distort(int r1, int r2){

  strip.clear();

}

void distort(int r1, int r2, int r3){

  strip.clear();

}


=======
>>>>>>> parent of a75177e (Update squidMask.ino)

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

<<<<<<< HEAD
  
=======
  int colorPos = random(6);
  int pos3 = strip.getPixelColor(3);
  int colorVal = strip.getPixelColor(colorPos);

  strip.setPixelColor(3, strip.Color(255, 255, 255));
  strip.show();
>>>>>>> parent of a75177e (Update squidMask.ino)

  while(0 == 0){
    colorPos = random(6);

    if(pos3 == (255, 255, 255)){
      
    }
  }

}





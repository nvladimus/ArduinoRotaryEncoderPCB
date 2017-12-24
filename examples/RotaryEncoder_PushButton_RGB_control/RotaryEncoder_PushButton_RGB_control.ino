l#include <Encoder.h> //encoder library
// Change these two numbers to the pins connected to your encoder.
//   Best Performance: both pins have interrupt capability
//   Good Performance: only the first pin has interrupt capability
//   Low Performance:  neither pin has interrupt capability
//   avoid using pins with LEDs attached. See more at https://www.pjrc.com/teensy/td_libs_Encoder.html
Encoder myEnc(2,3);

// set up the button action of the rotary encoder shaft
int buttonState = LOW;
int pinButton = 4;

// set up RGB control pins
int rgbState = -1;
int pinsRGB[3] = {5,6,7};

void setup() {
  Serial.begin(115200);
  Serial.println("Basic Encoder Test:");
  pinMode(pinButton, INPUT);
  for(byte i=0;i<3;i++){
    pinMode(pinsRGB[i], OUTPUT);
    digitalWrite(pinsRGB[i],HIGH); //turn LEDs off
  }
}

long oldPosition  = -999;

void loop() {
  long newPosition = myEnc.read();
  if (newPosition != oldPosition) {
    oldPosition = newPosition;
    Serial.println(newPosition);
  }
  //read the button state
  int reading = digitalRead(pinButton);
  if(reading != buttonState){
    buttonState = reading;
    if(buttonState == HIGH){
        Serial.println("button pressed");
        rgbState++;
        rgbState = rgbState % 3; //cycle through 0,1,2
        digitalWrite(pinsRGB[rgbState],LOW); //turn new LED on
        digitalWrite(pinsRGB[(3 + rgbState - 1) % 3],HIGH); //turn previous LED off
    }
  }
}

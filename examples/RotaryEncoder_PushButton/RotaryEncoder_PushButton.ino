#include <Encoder.h> //encoder library https://www.pjrc.com/teensy/td_libs_Encoder.html

// Change these two numbers to the pins connected to your encoder.
//   Best Performance: both pins have interrupt capability
//   Good Performance: only the first pin has interrupt capability
//   Low Performance:  neither pin has interrupt capability
Encoder myEnc(2,3);
//   avoid using pins with LEDs attached

// set up the button action of the rotary encoder shaft
int buttonState = LOW;
int pinButton = 4;

void setup() {
  Serial.begin(115200);
  Serial.println("Basic Encoder Test:");
  pinMode(pinButton, INPUT);
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
    }
  }
}

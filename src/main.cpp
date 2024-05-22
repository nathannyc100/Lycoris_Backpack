#include <Arduino.h>

TinyStepper_28BYJ_48 stepper;
const int buttonPin = 1;

void setup() {
  pinMode(buttonPin, INPUT)
  stepper.connectToPins(3, 4, 5, 6)
}

void loop() {
  int reading = digitalRead(buttonPin)
  if (reading == HIGH){
    delay(1000)
    stepper.moveRelativeInSteps(500)
    delay(2000)
    stepper.moveRelativeInSteps(-500)
  }
  delay(1000)
}

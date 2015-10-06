//Alex Zhao
//RCOS GateKeeper

#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_PWMServoDriver.h"

Adafruit_MotorShield AFMS = Adafruit_MotorShield();
Adafruit_DCMotor *myMotor = AFMS.getMotor(1);

void setup() {
  Serial.begin(115200);
  Serial.println("Adafruit Motorshield v2 - DC Motor test!");
  AFMS.begin();
  Serial.println("test");
  
  myMotor->setSpeed(150);
  myMotor->run(FORWARD);
  myMotor->run(RELEASE);
}

void loop() {
  myMotor->setSpeed(100);  
}

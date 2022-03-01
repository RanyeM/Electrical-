#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"

Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 

Adafruit_DCMotor *leftfrontMotor = AFMS.getMotor(1);
Adafruit_DCMotor *rightfrontMotor = AFMS.getMotor(2);
Adafruit_DCMotor *leftbackMotor = AFMS.getMotor(3);
Adafruit_DCMotor *rightbackMotor = AFMS.getMotor(4);

void setup() {
  // run motors forward, to run once:
  AFMS.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  leftfrontMotor->setSpeed(150);//0-255 
  leftfrontMotor->run(FORWARD);
  rightfrontMotor->setSpeed(150);//0-255 
  rightfrontMotor->run(FORWARD);
  rightbackMotor->setSpeed(150);//0-255 
  rightbackMotor->run(FORWARD);
  leftbackMotor->setSpeed(150);//0-255 
  leftbackMotor->run(FORWARD);
  delay(5000);

  // run motors backward, to run once:
  AFMS.begin();
  leftfrontMotor->setSpeed(150);//0-255 
  leftfrontMotor->run(BACKWARD); 
  rightfrontMotor->setSpeed(150);//0-255 
  rightfrontMotor->run(BACKWARD);
  rightbackMotor->setSpeed(150);//0-255 
  rightbackMotor->run(BACKWARD);
  leftbackMotor->setSpeed(150);//0-255 
  leftbackMotor->run (BACKWARD);
  delay(5000);

  // release, to run once:
  AFMS.begin();
  leftfrontMotor->run(RELEASE); 
  rightfrontMotor->run(RELEASE);
  rightbackMotor->run(RELEASE);
  leftbackMotor->run (RELEASE);
  delay(2000);

}

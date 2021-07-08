#include <Arduino.h>
#include "28BYJ48.h"

BYJ48::BYJ48(int pin1, int pin2, int Pin3, int Pin4) {
  this->pin1 = pin1;
  this->pin2 = pin2;
  pin3 = Pin3;
  pin4 = Pin4;

}

void BYJ48::begin() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);  
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
}
  
void BYJ48::FullStep(int Delay) {
  digitalWrite(pin1, HIGH);
  delay(Delay); /* delay of ? milli seconds */
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);
  delay(Delay); /* delay of ? milli seconds */ 
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, HIGH);
  delay(Delay); /* delay of ? milli seconds */ 
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, HIGH);
  delay(Delay); /* delay of ? milli seconds */ 
  digitalWrite(pin4, LOW);
  delay(Delay); /* delay of ? milli seconds */   
}

void BYJ48::HalfStep(int Delay) {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin3, LOW);
  delay(Delay); /* delay of ? milli seconds */
  digitalWrite(pin2, HIGH);  
  digitalWrite(pin4, LOW);
  delay(Delay); /* delay of ? milli seconds */  
  digitalWrite(pin3, HIGH);
  digitalWrite(pin1, LOW);
  delay(Delay); /* delay of ? milli seconds */  
  digitalWrite(pin4, HIGH);
  digitalWrite(pin2, LOW);
  delay(Delay); /* delay of ? milli seconds */   
}

void BYJ48::SetSpeed(int Speed){
  this->Speed = Speed;
}

int BYJ48::GetSpeed() {
  return this->Speed;
}

void BYJ48::Stop() {
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
}

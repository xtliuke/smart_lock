#include "LockLib.h"
#include "Arduino.h"

void LockLib::begin(int pinA, int pinB) {
  lockPinA = pinA;
  lockPinB = pinB;
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  close();
}

void LockLib::open() {
  digitalWrite(lockPinA, LOW);
  digitalWrite(lockPinB, HIGH);
  delay(200);
  digitalWrite(lockPinA, LOW);
  digitalWrite(lockPinB, LOW);
}

void LockLib::close() {
  digitalWrite(lockPinA, HIGH);
  digitalWrite(lockPinB, LOW);
  delay(200);
  digitalWrite(lockPinA, LOW);
  digitalWrite(lockPinB, LOW);
}

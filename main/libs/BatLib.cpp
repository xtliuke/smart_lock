#include "BatLib.h"
#include "Arduino.h"

void BatLib::begin(int pin) {
  adcPin = pin;
  analogSetPinAttenuation(pin, ADC_11db);
  analogReadResolution(12);
}

uint32_t BatLib::getVol() {
  uint32_t vol = analogReadMilliVolts(adcPin) * 2;
  return vol;
}
#include "Arduino.h"
#include "esp_log.h"
#include "libs/BatLib.h"
#include "libs/LockLib.h"

LockLib lockLib;
BatLib batLib;

void setup() {
  lockLib.begin(6, 7);
  batLib.begin(0);
}

void loop() {
  delay(500);
  uint32_t vol = batLib.getVol();
  ESP_LOGI("TAG", "vol=%lu", vol);
}

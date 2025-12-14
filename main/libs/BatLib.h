#ifndef BATLIB_H
#define BATLIB_H

#include <stdint.h>

class BatLib {
private:
  int adcPin;

public:
  void begin(int pin);
  uint32_t getVol();
};

#endif
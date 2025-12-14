#ifndef LOCKLIB_H
#define LOCKLIB_H

class LockLib {
private:
  int lockPinA;
  int lockPinB;

public:
  void begin(int pinA, int pinB);
  void open();
  void close();
};

#endif

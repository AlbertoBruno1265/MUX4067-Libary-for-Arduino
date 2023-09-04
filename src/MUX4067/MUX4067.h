#ifndef MUX4067
#define MUX4067

#include "Arduino.h"

class mux4067
{
  private:
    byte _sig, _s0, _s1, _s2, _s3;

  public:
    mux4067(byte sig, byte s0, byte, s1, byte, s2, byte s3);
    void c0();
    void c1();
    void c2();
    void c3();
    void c4();
    void c5();
    void c6();
    void c7();
    void c8();
    void c9();
    void c10();
    void c11();
    void c12();
    void c13();
    void c14();
    void c15();
};

#endif

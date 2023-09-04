#include "Arduino.h"
#include "MUX4067.h"

mux4067::mux4067(byte sig, byte s0, byte s1, byte s2, byte s3){
//  pinMode();
  _sig = sig;
  _s0 = s0;
  _s1 = s1;
  _s2 = s2;
  _s3 = s3;
}

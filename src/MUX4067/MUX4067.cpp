#include "Arduino.h"
#include "MUX4067.h"

mux4067::mux4067(byte sig, byte s0, byte s1, byte s2, byte s3, int opt){
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);

  if (opt == 0){
    pinMode(sig, INPUT);
  }
  else if(opt == 1){
    pinMode(sig, OUTPUT);
  }
  
  _sig = sig;
  _s0 = s0;
  _s1 = s1;
  _s2 = s2;
  _s3 = s3;
  _opt = opt;
}

mux4067::mux4067(byte sig, byte s0, byte s1, byte s2, byte s3){
  pinMode(sig, INPUT);
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  
  _sig = sig;
  _s0 = s0;
  _s1 = s1;
  _s2 = s2;
  _s3 = s3;
  _opt = 0;
}

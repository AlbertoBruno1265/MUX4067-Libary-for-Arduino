#include "Arduino.h"
#include "MUX4067.h"

mux4067::mux4067(byte sig, byte s0, byte s1, byte s2, byte s3, int inpt_outpt, int analog_digit){
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);

  if (inpt_outpt == 0){
    pinMode(sig, INPUT);
  }
  else if(inpt_outpt == 1){
    pinMode(sig, OUTPUT);
  }
  
  _sig = sig;
  _s0 = s0;
  _s1 = s1;
  _s2 = s2;
  _s3 = s3;
  _inpt_outpt = inpt_outpt;
  _analog_digit = _analog_digit;
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
  _inpt_outpt = 0;
  _analog_digit = 0;
}

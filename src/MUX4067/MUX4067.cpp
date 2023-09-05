#include "Arduino.h"
#include "MUX4067.h"

mux4067::mux4067(byte s0, byte s1, byte s2, byte s3, byte sig, int inpt_outpt, int analog_digit){
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
  
  _s0 = s0;
  _s1 = s1;
  _s2 = s2;
  _s3 = s3;
  _sig = sig;
  _inpt_outpt = inpt_outpt;
  _analog_digit = analog_digit;
}

mux4067::mux4067(byte s0, byte s1, byte s2, byte s3, byte sig){
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);

  _s0 = s0;
  _s1 = s1;
  _s2 = s2;
  _s3 = s3;  
  _sig = sig;
  _inpt_outpt = 0;
  _analog_digit = 0;
}

int mux4067::_check_choice(bool sig_state, int sig_pwm){
  int channel_value = 0;
  
  if (_inpt_outpt == 0 && _analog_digit == 0){
    channel_value = analogRead(_sig);
  }
  else if (_inpt_outpt == 0 && _analog_digit == 1){
    channel_value = digitalRead(_sig);
  }
  else if (_inpt_outpt == 1 && _analog_digit == 0){
    analogWrite(_sig, sig_pwm);
  }
  else if (_inpt_outpt == 1 && _analog_digit == 1){
    digitalWrite(_sig, sig_state);
  }

  return channel_value;
}

int mux4067::c0(bool sig_state, int sig_pwm){
  digitalWrite(_s0, LOW);
  digitalWrite(_s1, LOW);
  digitalWrite(_s2, LOW);
  digitalWrite(_s3, LOW);

  return mux4067::_check_choice(sig_state, sig_pwm);
}

int mux4067::c1(bool sig_state, int sig_pwm){
  digitalWrite(_s0, HIGH);
  digitalWrite(_s1, LOW);
  digitalWrite(_s2, LOW);
  digitalWrite(_s3, LOW);
  
  return mux4067::_check_choice(sig_state, sig_pwm);
}

int mux4067::c2(bool sig_state, int sig_pwm){
  digitalWrite(_s0, LOW);
  digitalWrite(_s1, HIGH);
  digitalWrite(_s2, LOW);
  digitalWrite(_s3, LOW);
  
  return mux4067::_check_choice(sig_state, sig_pwm);
}

int mux4067::c3(bool sig_state, int sig_pwm){
  digitalWrite(_s0, HIGH);
  digitalWrite(_s1, HIGH);
  digitalWrite(_s2, LOW);
  digitalWrite(_s3, LOW);
  
  return mux4067::_check_choice(sig_state, sig_pwm);
}

int mux4067::c4(bool sig_state, int sig_pwm){
  digitalWrite(_s0, LOW);
  digitalWrite(_s1, LOW);
  digitalWrite(_s2, HIGH);
  digitalWrite(_s3, LOW);
  
  return mux4067::_check_choice(sig_state, sig_pwm);
}

int mux4067::c5(bool sig_state, int sig_pwm){
  digitalWrite(_s0, HIGH);
  digitalWrite(_s1, LOW);
  digitalWrite(_s2, HIGH);
  digitalWrite(_s3, LOW);
  
  return mux4067::_check_choice(sig_state, sig_pwm);
}

int mux4067::c6(bool sig_state, int sig_pwm){
  digitalWrite(_s0, LOW);
  digitalWrite(_s1, HIGH);
  digitalWrite(_s2, HIGH);
  digitalWrite(_s3, LOW);
  
  return mux4067::_check_choice(sig_state, sig_pwm);
}

int mux4067::c7(bool sig_state, int sig_pwm){
  digitalWrite(_s0, HIGH);
  digitalWrite(_s1, HIGH);
  digitalWrite(_s2, HIGH);
  digitalWrite(_s3, LOW);
  
  return mux4067::_check_choice(sig_state, sig_pwm);
}

int mux4067::c8(bool sig_state, int sig_pwm){
  digitalWrite(_s0, LOW);
  digitalWrite(_s1, LOW);
  digitalWrite(_s2, LOW);
  digitalWrite(_s3, HIGH);
  
  return mux4067::_check_choice(sig_state, sig_pwm);
}

int mux4067::c9(bool sig_state, int sig_pwm){
  digitalWrite(_s0, HIGH);
  digitalWrite(_s1, LOW);
  digitalWrite(_s2, LOW);
  digitalWrite(_s3, HIGH);
  
  return mux4067::_check_choice(sig_state, sig_pwm);
}

int mux4067::c10(bool sig_state, int sig_pwm){
  digitalWrite(_s0, LOW);
  digitalWrite(_s1, HIGH);
  digitalWrite(_s2, LOW);
  digitalWrite(_s3, HIGH);
  
  return mux4067::_check_choice(sig_state, sig_pwm);
}

int mux4067::c11(bool sig_state, int sig_pwm){
  digitalWrite(_s0, HIGH);
  digitalWrite(_s1, HIGH);
  digitalWrite(_s2, LOW);
  digitalWrite(_s3, HIGH);
  
  return mux4067::_check_choice(sig_state, sig_pwm);
}

int mux4067::c12(bool sig_state, int sig_pwm){
  digitalWrite(_s0, LOW);
  digitalWrite(_s1, LOW);
  digitalWrite(_s2, HIGH);
  digitalWrite(_s3, HIGH);
  
  return mux4067::_check_choice(sig_state, sig_pwm);
}

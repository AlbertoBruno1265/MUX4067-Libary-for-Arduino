#ifndef MUX4067
#define MUX4067

#include "Arduino.h"

class mux4067
{
  private:
    byte _sig, _s0, _s1, _s2, _s3;
    int _inpt_outpt, _analog_digit;
    int _check_choice(bool sig_state=LOW, int sig_pwm=0);

  public:
    mux4067(byte s0, byte s1, byte s2, byte s3, byte sig, int inpt_outpt, int analog_digit);    
    mux4067(byte s0, byte s1, byte s2, byte s3, byte sig);
    int c0(bool sig_state=LOW, int sig_pwm=0);
    int c1(bool sig_state=LOW, int sig_pwm=0);
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

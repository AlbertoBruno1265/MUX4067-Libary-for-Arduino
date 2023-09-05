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
    int c2(bool sig_state=LOW, int sig_pwm=0);
    int c3(bool sig_state=LOW, int sig_pwm=0);
    int c4(bool sig_state=LOW, int sig_pwm=0);
    int c5(bool sig_state=LOW, int sig_pwm=0);
    int c6(bool sig_state=LOW, int sig_pwm=0);
    int c7(bool sig_state=LOW, int sig_pwm=0);
    int c8(bool sig_state=LOW, int sig_pwm=0);
    int c9(bool sig_state=LOW, int sig_pwm=0);
    int c10(bool sig_state=LOW, int sig_pwm=0);
    int c11(bool sig_state=LOW, int sig_pwm=0);
    int c12(bool sig_state=LOW, int sig_pwm=0);
    int c13(bool sig_state=LOW, int sig_pwm=0);
    int c14(bool sig_state=LOW, int sig_pwm=0);
    int c15(bool sig_state=LOW, int sig_pwm=0);
};

#endif

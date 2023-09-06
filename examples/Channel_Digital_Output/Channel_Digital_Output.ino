#include <MUX4067.h>

mux4067 mux(14, 12, 13, 15, 2, 1, 1);

void setup(){
  
}

void loop(){
  mux.c0(HIGH);
  delay(1000);
  mux.c0(LOW);
  delay(1000);
}

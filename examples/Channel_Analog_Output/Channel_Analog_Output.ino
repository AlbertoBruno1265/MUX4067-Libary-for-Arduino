#include <MUX4067.h>

mux4067 mux(14, 12, 13, 15, 2, 1);

void setup(){
  
}

void loop(){
  for (int i=0; i<255; i++){
    mux.c0(HIGH, i);
    delay(100);
  }
  
  for (int i=255; i>=0; i--){
    mux.c0(HIGH, i);
    delay(100);
  }
}

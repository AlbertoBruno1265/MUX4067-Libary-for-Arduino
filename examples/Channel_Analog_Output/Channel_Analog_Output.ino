/*****************************************************

  CREATED BY: ALBERTO BRUNO SILVESTRE DE OLIVEIRA

  GITHUB: https://github.com/AlbertoBruno1265/MUX4067-Library-for-Arduino
  
  Channel_Analog_Output.ino

*****************************************************/

// Import the library
#include <MUX4067.h>

// Instance the object
     // mux(s0, s1, s2, s3, sig);
mux4067 mux(14, 12, 13, 15, 2, 1);

void setup(){
  
}

void loop(){
  for (int i=0; i<255; i++){
    // Update the PWM value
    mux.c0(HIGH, i);
    delay(100);
  }
  
  for (int i=255; i>=0; i--){
    // Update the PWM value
    mux.c0(HIGH, i);
    delay(100);
  }
}

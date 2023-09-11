/*****************************************************

  CREATED BY: ALBERTO BRUNO SILVESTRE DE OLIVEIRA

  GITHUB: https://github.com/AlbertoBruno1265/MUX4067-Library-for-Arduino
  
  Channel_Digital_Output.ino

*****************************************************/

// Import the library
#include <MUX4067.h>

// Instance the object
     // mux(s0, s1, s2, s3, sig, input(0)/output(1), analog(0)/Digital(1));
mux4067 mux(14, 12, 13, 15, 2, 1, 1);

void setup(){
  
}

void loop(){
  // Change the Channel State
  mux.c0(HIGH);
  delay(1000);
  mux.c0(LOW);
  delay(1000);
}

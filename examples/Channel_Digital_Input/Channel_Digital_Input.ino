/*****************************************************

  CREATED BY: ALBERTO BRUNO SILVESTRE DE OLIVEIRA

  GITHUB: https://github.com/AlbertoBruno1265/MUX4067-Library-for-Arduino
  
  Channel_Digital_Input.ino

*****************************************************/

// Import the library
#include <MUX4067.h>

// Instance the object
     // mux(s0, s1, s2, s3, sig, input(0)/output(1), analog(0)/Digital(1));
mux4067 mux(14, 12, 13, 15, A0, 0, 1);

// Create Sensor0
int Sensor0;

void setup(){
  // Open Serial communication
  Serial.begin(115200);
}

void loop(){
  // Show the Sensor value
  Sensor0 = mux.c0();
  Serial.print("Sensor0: "); Serial.println(Sensor0);
}

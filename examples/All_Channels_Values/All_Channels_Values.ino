/*****************************************************

  CREATED BY: ALBERTO BRUNO SILVESTRE DE OLIVEIRA

  GITHUB: https://github.com/AlbertoBruno1265/MUX4067-Library-for-Arduino
  
  All_Channels_Values.ino

*****************************************************/

// Import the library
#include <MUX4067.h>

// Instance the object
     // mux(s0, s1, s2, s3, sig);
mux4067 mux(14, 12, 13, 15, A0);

// Create an Array
int values_arr[16];

void setup(){
  // Open Serial communication
  Serial.begin(115200);
}

void loop(){
  // Start the loop
  for (int i=0; i<16; i++){
    // Add Channel[i] to array position[i]
    values_arr[i] = int(mux.all_channels_value()[i]);
    Serial.print("Channel "); Serial.print(i); Serial.print(": "); Serial.println(values_arr[i]);
    delay(500);
  }
}

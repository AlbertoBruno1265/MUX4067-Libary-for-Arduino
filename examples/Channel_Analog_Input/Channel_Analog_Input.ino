#include <MUX4067.h>

mux4067 mux4067 mux(14, 12, 13, 15, A0);

int Sensor0;

void setup(){
  Serial.begin(115200);
}

void loop(){
  Sensor0 = mux.c0();
  Serial.print("Sensor0: "); Serial.println(Sensor0);
}

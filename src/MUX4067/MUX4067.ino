#include "MUX4067.h"

mux4067 mux(2, 14, 12, 13, 15, 1, 1);

int sensor0;

void setup() {
  Serial.begin(115200);
}

void loop() {
//  sensor0 = mux.c0();
//  Serial.print("Sensor0: "); Serial.println(sensor0);
  sensor0 = mux.c1(HIGH);
  delay(1000);
  sensor0 = mux.c1(LOW);
  delay(1000);
}

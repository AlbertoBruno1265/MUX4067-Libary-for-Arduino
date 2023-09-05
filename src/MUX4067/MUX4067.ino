#include "MUX4067.h"

mux4067 mux(A0, 14, 12, 13, 15, 0, 0);

int sensor0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  sensor0 = mux.c0();
  Serial.print("Sensor0: "); Serial.println(sensor0);
  delay(1000);
}

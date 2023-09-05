#include "MUX4067.h"

// Test Input Analog
mux4067 mux(14, 12, 13, 15, A0);

// Test Input Digital
//mux4067 mux(14, 12, 13, 15, A0, 0, 1);

// Test Output Analog
//mux4067 mux(14, 12, 13, 15, A0, 1);

// Test Output Digital
//mux4067 mux(14, 12, 13, 15, A0, 1, 1);

int sensor0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  // Test Chennel 0
  sensor0 = mux.c0();
  Serial.print("Sensor0: "); Serial.println(sensor0);

  // Test Chennel 1
//  sensor0 = mux.c1(HIGH);
//  delay(1000);
//  sensor0 = mux.c1(LOW);
//  delay(1000);
}

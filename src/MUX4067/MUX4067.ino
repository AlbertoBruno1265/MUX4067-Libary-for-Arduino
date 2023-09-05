#include "MUX4067.h"

// Test Input Analog
//mux4067 mux(14, 12, 13, 15, A0);

// Test Input Digital
//mux4067 mux(14, 12, 13, 15, A0, 0, 1);

// Test Output Analog
//mux4067 mux(14, 12, 13, 15, 2, 1);

// Test Output Digital
mux4067 mux(14, 12, 13, 15, 2, 1, 1);

int sensor0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  // Test Chennel 0
//  sensor0 = mux.c0();
//  Serial.print("Sensor0: "); Serial.println(sensor0);

  // Test Chennel 1
  mux.c9(HIGH);
  delay(1000);
  mux.c9(LOW);
  delay(1000);

  // Test Chennel 2
//  sensor0 = mux.c2();
//  Serial.print("Sensor0: "); Serial.println(sensor0);

//   Test Chennel 3
//  sensor0 = mux.c3();
//  Serial.print("Sensor0: "); Serial.println(sensor0);

//   Test Chennel 4
//  sensor0 = mux.c4();
//  Serial.print("Sensor0: "); Serial.println(sensor0);

  //   Test Chennel 5
//  sensor0 = mux.c5();
//  Serial.print("Sensor0: "); Serial.println(sensor0);

  //   Test Chennel 6
//  sensor0 = mux.c6();
//  Serial.print("Sensor0: "); Serial.println(sensor0);

    //   Test Chennel 7
//  sensor0 = mux.c7();
//  Serial.print("Sensor0: "); Serial.println(sensor0);

    //   Test Chennel 8
//  sensor0 = mux.c8();
//  Serial.print("Sensor0: "); Serial.println(sensor0);

  //   Test Chennel 9
//  sensor0 = mux.c9();
//  Serial.print("Sensor0: "); Serial.println(sensor0);
}

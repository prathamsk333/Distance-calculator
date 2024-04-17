#include <Ultrasonic.h>

#define TRIG_PIN 7
#define ECHO_PIN 6

Ultrasonic ultrasonic(TRIG_PIN, ECHO_PIN);

void setup() {
  Serial.begin(9600);
}

void loop() {
  long duration, distance;
  
  duration = ultrasonic.timing();
  distance = (duration / 2) / 29.1;
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  delay(500);
}

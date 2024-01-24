#include <Servo.h>

Servo myservo;  // create servo object to control a ser
#define servoPin 2  // Choose the digital pin connected to the servo

void setup() {
  myservo.attach(servoPin);  // attaches the servo on the specified pin
}

void loop() {
  // Rotate 15 degrees clockwise
  myservo.write(15);
  delay(1000);  // Wait for 2 seconds

  // Rotate 15 degrees anticlockwise
  myservo.write(165);  // 180 - 15
  delay(1000);  // Wait for 2 seconds
}

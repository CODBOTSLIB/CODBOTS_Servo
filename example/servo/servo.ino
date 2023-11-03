#include <CODBOTS_SmoothServo.h>

//servo
#define PIN_SERVO 18

CODBOTS_SmoothServo servo(PIN_SERVO);

void setup() {
  Serial.begin(115200);
  servo.begin();
}

void loop() {
  if (servo.isReached()) {
    servo.turn();
  }
}
#include <AFMotor.h>

AF_DCMotor leftfront_motor(1);
AF_DCMotor leftback_motor(2);
AF_DCMotor rightfront_motor(3);
AF_DCMotor rightback_motor(4);

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  
  // turn on motor
  leftfront_motor.setSpeed(225);
  leftback_motor.setSpeed(127);
  rightfront_motor.setSpeed(225);
  leftback_motor.setSpeed(127);
  
}

void loop() {
  moveForward();
  delay(1000);
  leftfront_motor.run(RELEASE);
  leftback_motor.run(RELEASE);
  rightfront_motor.run(RELEASE);
  rightback_motor.run(RELEASE);
  
  moveBackward();
  delay(1000);
  leftfront_motor.run(RELEASE);
  leftback_motor.run(RELEASE);
  rightfront_motor.run(RELEASE);
  rightback_motor.run(RELEASE);
  
  moveSidewaysRight();
  delay(1000);
  leftfront_motor.run(RELEASE);
  leftback_motor.run(RELEASE);
  rightfront_motor.run(RELEASE);
  rightback_motor.run(RELEASE);
  
  moveSidewaysLeft();
  delay(1000);
  leftfront_motor.run(RELEASE);
  leftback_motor.run(RELEASE);
  rightfront_motor.run(RELEASE);
  rightback_motor.run(RELEASE);
  

}
void moveForward() {
  leftfront_motor.run(FORWARD);
  leftback_motor.run(FORWARD);
  rightfront_motor.run(FORWARD);
  rightback_motor.run(FORWARD);
}

void moveBackward() {
  leftfront_motor.run(BACKWARD);
  leftback_motor.run(BACKWARD);
  rightfront_motor.run(BACKWARD);
  rightback_motor.run(BACKWARD);
}

void moveSidewaysRight() {
  leftfront_motor.run(FORWARD);
  leftback_motor.run(BACKWARD);
  rightfront_motor.run(BACKWARD);
  rightback_motor.run(FORWARD);
}

void moveSidewaysLeft() {
  leftfront_motor.run(BACKWARD);
  leftback_motor.run(FORWARD);
  rightfront_motor.run(FORWARD);
  rightback_motor.run(BACKWARD);
}

void rotateLeft() {
  leftfront_motor.run(BACKWARD);
  leftback_motor.run(BACKWARD);
  rightfront_motor.run(FORWARD);
  rightback_motor.run(FORWARD);
}

void rotateRight() {
  leftfront_motor.run(FORWARD);
  leftback_motor.run(FORWARD);
  rightfront_motor.run(BACKWARD);
  rightback_motor.run(BACKWARD);
}

void moveRightForward() {
  leftfront_motor.run(FORWARD);
  leftback_motor.run(RELEASE);
  rightfront_motor.run(RELEASE);
  rightback_motor.run(FORWARD);
}

void moveRightBackward() {
  leftfront_motor.run(RELEASE);
  leftback_motor.run(BACKWARD);
  rightfront_motor.run(BACKWARD);
  rightback_motor.run(RELEASE);
}

void moveLeftForward() {
  leftfront_motor.run(RELEASE);
  leftback_motor.run(FORWARD);
  rightfront_motor.run(FORWARD);
  rightback_motor.run(RELEASE);
}

void moveLeftBackward() {
  leftfront_motor.run(BACKWARD);
  leftback_motor.run(RELEASE);
  rightfront_motor.run(RELEASE);
  rightback_motor.run(BACKWARD);
}

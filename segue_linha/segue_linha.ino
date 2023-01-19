#include "settings.h"
#include "utils.h"

void setup() {

  Serial.begin(BAUD_RATE);

  //Pinos dos IR
  pinMode(IR_LEFT_PIN, INPUT);
  pinMode(IR_CENTER_PIN, INPUT);
  pinMode(IR_RIGHT_PIN, INPUT);

  //Pinos de controlo do motor
  pinMode(MOTOR_1_PIN_A, OUTPUT);
  pinMode(MOTOR_1_PIN_B, OUTPUT);
  pinMode(MOTOR_2_PIN_A, OUTPUT);
  pinMode(MOTOR_2_PIN_B, OUTPUT);

  servoMUX.begin();
  servoMUX.setPWMFreq(PULSE_FREQ);
  delay(500);

  //armInitPosition();
  delay(1000);
}


void loop() {

 moveServo(SERVO_VERT, 0, FAST_SPEED);
 delay(500);
 moveServo(SERVO_VERT, 180, FAST_SPEED);
 delay(500);
 moveServo(SERVO_GARRA, 110, FAST_SPEED);
 delay(500);
 moveServo(SERVO_GARRA, 30, FAST_SPEED);
 delay(500);
  
}




// Posisão Inicial do Braço
void armInitPosition(){
  moveServo(SERVO_BASE,  INIT_BASE_ANGLE, FAST_SPEED);
  moveServo(SERVO_VERT,  INIT_VERT_ANGLE, FAST_SPEED);
  moveServo(SERVO_HORI,  INIT_HORI_ANGLE, FAST_SPEED);
  moveServo(SERVO_GARRA, INIT_GARRA_ANGLE, FAST_SPEED);
}

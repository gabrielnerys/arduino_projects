#include <Servo.h>

Servo servo;

const int pinoPotenciometro = A0;
const int pinoServo = 3;

int leituraA0;

void setup() {
  // put your setup code here, to run once:
  servo.attach(pinoServo);
  pinMode(pinoPotenciometro, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  leituraA0 = analogRead(pinoPotenciometro);
  leituraA0 = map(leituraA0, 0, 1023, 580, 2600);
  servo.write(leituraA0);
  delay(0);
}

#include <Servo.h>

Servo myServo;

bool pressed;
int button = 3;
int state = 0;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(7);
  myServo.write(0);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  pressed = digitalRead(button);
  delay(200);

  if((state == 0) && (pressed == 0))
  {
    myServo.write(180);
    state == 1;
  }
  if((state == 1) && (pressed == 0))
  {
    myServo.write(0);
    state == 0;
  }
}

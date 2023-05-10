int sensor = 0;
int valorSensor = 0;

const int greenLed = 8;
const int yellowLed = 9;
const int redLed = 10;

void apagaLeds() {
  digitalWrite(greenLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(redLed, LOW);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int valorSensor = analogRead(sensor);

  if(valorSensor < 600)
  {
    apagaLeds();
    digitalWrite(redLed, HIGH);
  }

  if(valorSensor >= 600 && valorSensor <= 800)
  {
    apagaLeds();
    digitalWrite(yellowLed, HIGH);
  }

  if(valorSensor > 800)
  {
    apagaLeds();
    digitalWrite(greenLed, HIGH);
  }

  Serial.println(valorSensor);
  delay(50);
}

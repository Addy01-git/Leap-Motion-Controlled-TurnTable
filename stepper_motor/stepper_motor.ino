#define dirPin 4
#define stepPin 5

char val = '0';

void setup() {
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available())
  {
    val = Serial.read();
    if (val == 'r')
    {
      digitalWrite(dirPin, LOW);
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(2500);
      digitalWrite(stepPin, LOW);
      delayMicroseconds(2500);
    }
  
    if (val == 'l')
    {
      digitalWrite(dirPin, HIGH);
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(2500);
      digitalWrite(stepPin, LOW);
      delayMicroseconds(2500);
    }
  }
}


void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void forward() {
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  analogWrite(10, 200);
  analogWrite(9, 200);
}
void reverse() {
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  analogWrite(10, 200);
  analogWrite(9, 200);
}
void stop() {
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  analogWrite(10, 200);
  analogWrite(9, 200);
}
void left() {
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  analogWrite(10, 130);
  analogWrite(9, 260);
}
void right() {
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  analogWrite(10, 260);
  analogWrite(9, 130);
} 
  
  
  
void loop()
{
static unsigned long startTime = millis();

unsigned long elapsed = millis() - startTime;
  if (elapsed < 2000) {
    forward();
  }
  else if (elapsed < 4000) {
    left();
  }
  else if (elapsed < 6000) {
    right();
  }
  else if (elapsed < 8000) {
    left();
  }
  else if (elapsed < 10000) {
    right();
  }
} 
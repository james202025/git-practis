// C++ code
//
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
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
}
void reverse() {
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
}
void stop() {
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
}
  
  
  
  
void loop()
{
  forward();
  delay(5000);
  stop();
  delay(1000);
  reverse();
  delay(2000);  
}
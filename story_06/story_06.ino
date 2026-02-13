




const int RIGHT_FEEDBACK = 2; // Pin numbers on Rover for each motor sensor
const int LEFT_FEEDBACK = 3;

volatile int leftcounter = 0; // initiate counter to zero for start
volatile int rightcounter = 0; 

void setup()
{
  Serial.begin(115200);
  attachInterrupt(digitalPinToInterrupt(LEFT_FEEDBACK),LeftMotorISR,RISING);
  attachInterrupt(digitalPinToInterrupt(RIGHT_FEEDBACK),RightMotorISR,RISING);
}
void forward() {
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  analogWrite(10, 200);
  analogWrite(9, 200);
}
void stopMotors() {
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  analogWrite(10, LOW);
  analogWrite(9, LOW);
}
void loop(){
  // Just print out the values to show counter operating
  Serial.print("Left Counter ");
  Serial.println(leftcounter);   // This is printing then a new Line after
  
  Serial.print("Right Counter ");
  Serial.println(rightcounter);
  
  if(leftcounter < 870) {
    forward();
  }
  else { 
    stopMotors();
    exit(0);
}
}

void LeftMotorISR(){
  // adds one to the counter on each motor revolution
  leftcounter++;
}

void RightMotorISR(){
  // adds one to the counter on each motor revolution   
  rightcounter++;
}


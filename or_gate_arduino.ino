const int trigpin = 9;
const int echopin = 8;
const int led1 = 7;
const int led2 = 6;
const int led3 = 5;
float duration, distance;

void setup() {
  pinMode(trigpin, OUTPUT); // set arduino pin to output mode
  pinMode(echopin, INPUT);  // set arduino pin to input mode
  pinMode(led1, OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  Serial.begin(9600);
 

}

void loop() {
  // put your main code here, to run repeatedly:
  
  
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  // measure duration of pulse from ECHO pin
  duration = pulseIn(echopin, HIGH);
  // calculate the distance
  distance = 0.017 * duration;
  if(distance < 10){
    digitalWrite(led1, HIGH);
    // turn on LED
  }
  else {
    digitalWrite(led1, LOW);
  }
  if(distance > 10){
    digitalWrite(led2, HIGH);
    // turn on LED
  }
  else {
    digitalWrite(led2, LOW);
  }
  if(distance > 100){
    digitalWrite(led3, HIGH);
    // turn on LED
  }
  else {
    digitalWrite(led3, LOW);
  }
  Serial.print("distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);
}
  
  
  

  

int Buzzer =3;
const int trigPin = 9;

const int echoPin = 10;

long duration;
int distance;
void setup() {
  pinMode(Buzzer,OUTPUT);
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
}
void loop() {

  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
 
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);
  // delay(1000);
  if(distance<20){  
    // tone(Buzzer,1000);
    digitalWrite(Buzzer,1);
  // delay(100);
  }
  else{
  // noTone(Buzzer);
  digitalWrite(Buzzer,0);
  

}

delay(100);

  
}
int trigpin=9;
int echopin=8;
int distance;
float duration;
int ledpin=13;
float cm;
void setup() {
  pinMode(echopin,INPUT);
  pinMode(trigpin,OUTPUT);
  
  pinMode(ledpin,OUTPUT);
}

void loop() {
  digitalWrite(trigpin,LOW);
  delay(2);
  digitalWrite(trigpin,HIGH);
  delay(10);
  digitalWrite(trigpin,LOW);
  duration=pulseIn(echopin,HIGH);
  cm=duration/58.82;
  distance =cm;
  if(distance<30)
  {
    digitalWrite(ledpin,HIGH);
    delay(500);
    
  }
  else
  {
    digitalWrite(ledpin,LOW);
    delay(500);
    }
}
  

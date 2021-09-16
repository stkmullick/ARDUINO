    const int IR_SENSOR =2;
void setup() {
  pinMode(IR_SENSOR,INPUT);
  pinMode(13,OUTPUT);
   Serial.begin(9600);// put your setup code here, to run once:
  }

void loop() {
  if(digitalRead(IR_SENSOR)==HIGH)
  {  
  digitalWrite(13,LOW);
  Serial.write(digitalRead(IR_SENSOR));/*NO OBSTACLE PRESENT*/
  
}// put your main code here, to run repeatedly:
else
{
  digitalWrite(13,HIGH);/* OBJECT IS PRESENT*/
  delay(1000);
  Serial.write(digitalRead(IR_SENSOR));
}
}

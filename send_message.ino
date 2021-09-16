#include<SoftwareSerial.h>
SoftwareSerial gsm(2,3);
String SMS1="This is a Test SMS from your GSM Module";
String SMS2="Great! It works!";
void setup(){
  Serial.begin(9600);
  delay(100);
  sendMessage(SMS1);
  delay(5000);
  sendMessage(SMS2);
}
void sendMessage(String SMS)
{
  Serial.println("AT+CMGF=1");
  delay(1000);
  Serial.println("AT+CMGS=\"+917318709841\"\r");
  delay(1000);
  Serial.println(SMS);
  delay(100);
  Serial.println((char)26);
  delay(1000);
}
void loop(){
}

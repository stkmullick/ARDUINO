int bright =0;
int fadeamount=5;
int i=1;
int green=9;/*pins 9 10 11 ,5,3,,6 van be used*/
void setup() {
  pinMode(11,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  
  analogWrite(9,bright);
  delay(100);
  bright=bright+fadeamount;
  if(bright<=0||bright>=255)
{ fadeamount=-fadeamount;
}
delay(30);
 
 
 
 
  
 // put your main code here, to run repeatedly:

}

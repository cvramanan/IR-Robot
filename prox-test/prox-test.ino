void setup() {
  // put your setup code here, to run once:
pinMode(8,INPUT_PULLUP);
pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(8) == LOW )
{
  digitalWrite(7,HIGH);

  
}
else
{
  digitalWrite(7,LOW);
}
}

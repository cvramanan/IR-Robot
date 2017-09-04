
//-----------------------------------------------------------------------------------------------------------------------
void halt()
{
    digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
}
void fwd()
{
  digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
delay(100);
halt();
}
void bk()
{
  digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(100);
halt();
}
void l()
{
  digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
delay(100);
halt();
}
void r()
{
  digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
delay(100);
halt();
}
//--------------------------------------------------------------------------------------------------------------------------------


void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//digitalWrite(13,HIGH);
l();
delay(1000);
/*delay(1000);
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
delay(1000);
*/
}

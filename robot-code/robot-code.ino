#include <IRremote.h>
const int RECV_PIN = 6;
int ir_val= 0;
IRrecv irrecv(RECV_PIN);

decode_results results;
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
delay(50);
halt();

}
void bk()
{
  digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(50);
halt();

}
void l()
{
  digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
delay(50);
halt();

}
void r()
{
  digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
delay(50);
halt();

}
//--------------------------------------------------------------------------------------------------------------------------------

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  irrecv.blink13(true);
  pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,INPUT_PULLUP);
}
void loop() {
 
 if(digitalRead(8) == LOW )
{
  digitalWrite(7,HIGH);
while(true)
{
 if (irrecv.decode(&results)) {
   
 
   Serial.print(results.value);
  if(results.value == 4294967295 )
  {
    Serial.println("...");
  
    digitalWrite(7,LOW);
  break;
  }
 irrecv.resume(); 

 }
 delay(100);
}
  
}
else
{
  digitalWrite(7,LOW);
}

  if (irrecv.decode(&results)) {
  ir_val = results.value;

 switch(ir_val)
  {
    case 33478695 : fwd();
  
    break;
    case 33484815 : bk();
   
    break; 
     case 33435855 : l();
 
    break;
     case 33452175 : r();
 
    break;
  
   
  }
     irrecv.resume(); 
  }
 
//ir_val = 0 ;
  
  
  //digitalWrite(7,1);
}

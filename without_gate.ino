int count=0;
void setup() 
{   

pinMode(2,OUTPUT);//7 seg. display
pinMode(3,OUTPUT);//7 seg. display
pinMode(4,OUTPUT);//7 seg. display

pinMode(8,INPUT);//ir 1
pinMode(9,INPUT);//ir 2
pinMode(10,INPUT);//ir 3
pinMode(11,INPUT);//ir 4
pinMode(12,INPUT);//ir 5


/*pinMode(11,OUTPUT);//led 1
pinMode(14,OUTPUT);//led 2
pinMode(15,OUTPUT);//led 3
pinMode(16,OUTPUT);//led 4
pinMode(17,OUTPUT);//led 5*/


pinMode(7,INPUT);//gate count -in
pinMode(5,INPUT);//gate count -out
start();
}

void loop()
{ 
 // start();
//to count up and down on 7 segment DISPLAY...
   while (digitalRead(7)==HIGH)
  { 
    if (digitalRead(7)==LOW){
    count++;
    full();
    empty();
    display1();

  }
  }

   while (digitalRead(5)==HIGH)
  { 
   if (digitalRead(5)==HIGH){
    count--;
    full();
    empty();
    display1();
  }
  }
  
// to switch the leds on and off...
 /* if (digitalRead(8)==HIGH) digitalWrite(11,LOW);
  else digitalWrite(11,HIGH);
  if (digitalRead(9)==HIGH) digitalWrite(14,LOW);
  else digitalWrite(10,HIGH);
  if (digitalRead(7)==HIGH) digitalWrite(15,LOW);
  else digitalWrite(15,HIGH);
  if (digitalRead(8)==HIGH) digitalWrite(16,LOW);
  else digitalWrite(16,HIGH);
  if (digitalRead(9)==HIGH) digitalWrite(17,LOW);
  else digitalWrite(17,HIGH);
*/
  


  
}

void display1()
{
  switch(count)
    {
      case 0:
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      break;
      case 1:
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      break;
      case 2:
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      break;
      case 3:
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      break;
      case 4:
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      break;
      case 5:
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      break;
    
      
      
    }
}

void full()
{
  if (count>5)
  {
    count == 5;
  }
}

void start()
{
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
   delay(250);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    delay(250);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
   delay(250);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    delay(250);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    delay(250);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    delay(250);
   
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    
   
}

void empty()
{
  if (count<0)
  {
   count==0; 
   }
}


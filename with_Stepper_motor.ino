//int led1=2;
//int led2=3;
//int led3=4;
int i;
int sd0=1;
int sd1=2;
int sd2=3;

int smu=4;
int smd=5;
int rfin=12;
int rfout=13;
int count=0;
bool flag=false;
bool up=false;
bool down=false;
bool counter=true;
bool upcount=false;
bool downcount= false;

void setup() {   // put your setup code here, to run once:
//pinMode(11,INPUT);

pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(rfin,INPUT);
pinMode(rfout,INPUT);

pinMode (sd0,OUTPUT);
pinMode (sd1,OUTPUT);
pinMode (sd2,OUTPUT);
pinMode (smu,OUTPUT);
pinMode (smd,OUTPUT);

}

void loop() {
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  // put your main code here, to run repeatedly:
if (digitalRead(rfin)==HIGH)
 { if (digitalRead(rfin)==LOW)
 { 
  flag=true;
  up=true;
  counter=true;
  upcount=true;
 }
 }
 else
{ flag=false;
 up=false;
  upcount=false;
  counter=false;
}
if (digitalRead(rfout)==HIGH)
 {if (digitalRead(rfout)==LOW)
 {  
  flag=true;
  down=true;
  counter=true;
  downcount=true;
 }}
 else
{ flag=false;
 down=false;
  downcount=false;
  counter=false;
}

if(flag==true)
 {
//  if (up==true)
 // {
    for(i=0;i<10;i++)
    {
      //enable high on a pin1
//      delay(500);
      //enable low on a pin1
    }
  //  delay(3000);
 // }
 // if(up==true)
 // {
    for(i=0;i<10;i++)
     {
      //enable high on a pin2
    //  delay(500);
      //enable low on a pin2
    }
  //}
  if(counter==true)
  {
    
    if (upcount==true)
    {
    count++;
    }
    else if(upcount==true)
    {
      count--;
    }    
    switch(count)
    {
      case 0:
      digitalWrite(sd0,LOW);
      digitalWrite(sd1,LOW);
      digitalWrite(sd2,LOW);
      break;
      case 1:
      digitalWrite(sd0,HIGH);
      digitalWrite(sd1,LOW);
      digitalWrite(sd2,LOW);
      break;
      case 2:
      digitalWrite(sd0,LOW);
      digitalWrite(sd1,HIGH);
      digitalWrite(sd2,LOW);
      break;
      case 3:
      digitalWrite(sd0,HIGH);
      digitalWrite(sd1,HIGH);
      digitalWrite(sd2,LOW);
      break;
      case 4:
      digitalWrite(sd0,LOW);
      digitalWrite(sd1,LOW);
      digitalWrite(sd2,HIGH);
      break;
      case 5:
      digitalWrite(sd0,HIGH);
      digitalWrite(sd1,LOW);
      digitalWrite(sd2,HIGH);
      break;
      case 6:
      digitalWrite(sd0,LOW);
      digitalWrite(sd1,HIGH);
      digitalWrite(sd2,HIGH);
      break;
      case 7:
      digitalWrite(sd0,HIGH);
      digitalWrite(sd1,HIGH);
      digitalWrite(sd2,HIGH);
      break;
      default:
      digitalWrite(sd0,HIGH);
      digitalWrite(sd1,LOW);
      digitalWrite(sd2,LOW);
      break;
    }
    counter=false;
     upcount=false;
     downcount=false;
  }
  flag=false;
 }
  }
 


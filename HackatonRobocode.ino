#include <VitconGP2Y0A21YK.h>
using namespace vitcon;
GP2Y0A21YK sensor1(A6);
GP2Y0A21YK sensor2(A5);
GP2Y0A21YK sensor3(A7);

void setup(){
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  float f_distF = sensor1.GetDistance(); 
   float f_distL = sensor2.GetDistance();
   float f_distR = sensor3.GetDistance();
int x=0;

if(x==1&&f_distR<=12){
  right();
  delay(120);
}
if(f_distF<=12){
left();
delay(90);  

  
}else{
  forward();
 x=1;
 }

}

void forward(){
analogWrite(5,87);
analogWrite(10,87);
digitalWrite(7,HIGH);
digitalWrite(9,HIGH);
digitalWrite(6,LOW);
digitalWrite(8,LOW);  
}
void right(){
analogWrite(5,50);
analogWrite(10,50);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);
}
void left(){
analogWrite(5,50);
analogWrite(10,50  );
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8, HIGH);
digitalWrite(9,LOW);
}
void back(){
analogWrite(10,87);
analogWrite(5,87);
digitalWrite(7,LOW);
digitalWrite(9,LOW);
digitalWrite(6,HIGH);
digitalWrite(8,HIGH);  
} 

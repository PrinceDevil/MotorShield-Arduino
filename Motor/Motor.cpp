#include"Motor.h"
#include"Arduino.h"

Motor::Motor(int arg1,int arg2,int arg3=-1){
	in1=arg1;
	pinMode(in1,OUTPUT);
   /*
      for L298P motor shield
      L298P电机驱动
    */
    if (arg3==-1){
      type=0;                      
      en=arg2;
    }
    /*
     * for L298N/L9110 motor shield
     * L298N/L9110电机驱动
     */
    else{
      type=1;
      in2=arg2;
      en=arg3;
      pinMode(in2,OUTPUT);
    }
}
void Motor::Forward(int v=255){
  digitalWrite(in1,HIGH);
  analogWrite(en,v);
  if(type==1){digitalWrite(in2,LOW);}
}
void Motor::Backward(int v=255){
  digitalWrite(in1,LOW);
  analogWrite(en,v);
  if(type==1){digitalWrite(in2,HIGH);}
}
void Motor::Stop(){
  analogWrite(en,0);
}


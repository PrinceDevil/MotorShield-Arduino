#include<Motor.h>
#include<Arduino.h>

Motor::Motor(){
   /*
      for L298P motor shield
      L298P电机驱动
    */
    if (arg3==-1){
      type=0;          
      in1=arg1;             
      en=arg2;
      pinMode(in1,OUTPUT);
    }
    /*
     * for L298N/L9110 motor shield
     * L298N/L9110电机驱动
     */
    else{
      type=1;
      in1=arg1;
      in2=arg2;
      en=arg3;
      pinMode(in1,OUTPUT);
      pinMode(in2,OUTPUT);
    }
}
void::Forward(){
  digitalWrite(in1,HIGH);
  analogWrite(en,v);
  if(type==1){digitalWrite(in2,LOW)};
}
void::Backward(){
  digitalWrite(in1,LOW);
  analogWrite(en,v);
  if(type==1){digitalWrite(in2,HIGH)};
}
void::Stop(){
  analogWrite(en,0);
}


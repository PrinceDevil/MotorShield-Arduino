/*
 * The document demonstrates usage of L298P motor shield,and you can contribute to this project in e-mail 
 * princevergilius@gmail.com or 718815506@qq.com
 * 本文件适用于L298P电机驱动板，更多意见何建议请发送邮件联系：princevergilius@gmail.com  或 718815506@qq.com
 */
#include"Motor.h"

//initialize left and right motor|初始化左右电机
Motor lMotor(4,5);
Motor rMotor(8,9);
void setup() {
  // move forward|前进
  lMotor.Forward(150);
  rMotor.Forward(150);
  delay(1000);
  //move backwards|后退
  lMotor.Backward(150);
  rMotor.Backward(150);
  delay(1000);
  //turn right|右转
  lMotor.Forward(150);
  rMotor.Backward(150);
  delay(1000);
  //turn left|左转
  lMotor.Backward(150);
  rMotor.Forward(150);
  delay(1000);
  //stop|停止
  lMotor.Stop(150);
  rMotor.Stop(150);
}

void loop() {
}

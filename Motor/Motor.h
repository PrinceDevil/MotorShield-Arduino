#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

class Motor{
  public:
	int in1;
	int in2;
	int en;
	Motor(int arg1,int arg2,int arg3=-1);
	void Forward(int v=255);
	void Backward(int v=255);
	void Stop();
  
  private:
	int type;
};
#endif

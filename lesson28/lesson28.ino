#include <Stepper.h>
#define STEPS 100 //設定馬達轉一圈多少步
Stepper stepper(STEPS, 8, 9, 10, 11) ;
int previous = 0 ;
void setup()
{
  stepper.setSpeed(90) ; //每分鐘90步
}
void loop()
{
  int val = analogRead(A0) ;
  stepper.step(val - previous) ;
  previous = val ;
}


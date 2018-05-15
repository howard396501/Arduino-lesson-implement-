#include <Servo.h>
Servo myservo ;
void setup()
{
  myservo.attach(9) ;
}
void loop()
{
  for(int i = 0 ; i <= 90 ; i++)
  {
    myservo.write(i) ;
  }
  for(int j = 90 ; j >= 0 ; j++)
  {
    myservo.write(j) ;
  }
}


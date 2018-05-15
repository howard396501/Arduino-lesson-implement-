#include <Ultrasonic.h>

#define TRIG 4 
#define ECHO 5 
Ultrasonic ultrasonic(TRIG, ECHO) ;
void setup()
{
  Serial.begin(9600) ;
}
void loop()
{
  float cmMsec ;
  long microsec = ultrasonic.timing() ;
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM) ;
  Serial.print("Micro second : ") ;
  Serial.print(microsec) ;
  Serial.print(", Centimeter : ") ;
  Serial.println(cmMsec) ;
  delay(1000) ;
}


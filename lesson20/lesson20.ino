int redPin = 11 ;
int greenPin = 9 ;
int bluePin = 10 ;
void setup()
{
  pinMode(redPin, OUTPUT) ;
  pinMode(greenPin, OUTPUT) ;
  pinMode(bluePin, OUTPUT) ;
}
void loop()
{
  color(255, 0, 0) ; //red
  delay(1000) ;
  color(0, 255, 0) ; //green
  delay(1000) ;
  color(0, 0, 255) ; //blue
  delay(1000) ;

  color(255, 255, 0) ; //yellow
  delay(1000) ;
  color(255, 255, 255) ; //white
  delay(1000) ;
  color(128, 0, 255) ; //purple
  delay(1000) ;
  color(0, 0, 0) ; // LED off
  delay(1000) ;
}
void color(unsigned char red, unsigned char green, unsigned blue)
{
  analogWrite(redPin, 255-red) ;
  analogWrite(bluePin, 255-blue) ;
  analogWrite(greenPin, 255-green) ;
}


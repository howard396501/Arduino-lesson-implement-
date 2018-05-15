int redled = 3 ;
int yellowled = 5 ;
int greenled = 7 ;
void setup()
{
  pinMode(redled, OUTPUT) ; 
  pinMode(yellowled, OUTPUT) ;
  pinMode(greenled, OUTPUT) ;
}
void loop()
{
  digitalWrite(redled, HIGH) ;
  delay(1000) ;
  digitalWrite(redled, LOW) ;
  digitalWrite(yellowled, HIGH) ;
  delay(200) ;
  digitalWrite(yellowled, LOW) ;
  digitalWrite(greenled, HIGH) ;
  delay(1000) ;
  digitalWrite(greenled, LOW) ;
}


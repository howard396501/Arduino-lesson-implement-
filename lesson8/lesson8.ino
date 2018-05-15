void setup()
{
  pinMode(8, OUTPUT) ;
  Serial.begin(9600) ;
}
void loop()
{
  int i ;
  while(1)
  {
    i = analogRead(A5) ;
    if( i > 200 ) //如果大於512(2.5V)
    {
      digitalWrite(8, HIGH) ;
      Serial.println(i) ;
      delay(500) ;
    }
    else
    {
      digitalWrite(8, LOW) ;
      Serial.println(i) ;
      delay(500) ;
    }
  }
}


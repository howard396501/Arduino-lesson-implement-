int value = 0 ;
void setup()
{
  pinMode(7, INPUT) ;
  Serial.begin(9600) ;
}
void loop()
{
  value = analogRead(A0) ;
  Serial.print("X:") ;
  Serial.print(value, DEC) ;
  value = analogRead(A1) ;
  Serial.print(" | Y:") ;
  Serial.print(value, DEC) ;
  value = digitalRead(7) ;
  Serial.print(" | Z:") ;
  Serial.println(value, DEC) ;
  delay(100) ;
}


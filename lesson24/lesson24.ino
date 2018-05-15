int water = A0 ;
int ledPin = 12 ;
int val = 0 ;
int data = 0 ;
void setup()
{
  pinMode(ledPin, OUTPUT) ;
  Serial.begin(9600) ;
}
void loop()
{
  val = analogRead(water) ;
  if (val > 500)
  {
    digitalWrite(ledPin, HIGH) ;
  }
  else
  {
    digitalWrite(ledPin, LOW) ;
  }
  data = val ;
  Serial.println(data) ;
  delay(100) ;
}


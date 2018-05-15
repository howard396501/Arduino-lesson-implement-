int flame = A5 ;
int Beep = 8 ;
int val = 0 ;
void setup()
{
  pinMode(Beep, OUTPUT) ;
  pinMode(flame, INPUT) ;
  Serial.begin(9600) ;
}
void loop()
{
  val = analogRead(flame) ;
  Serial.println(val) ;
  if(val >= 10)
  {
    digitalWrite(Beep, HIGH) ; 
  }
  else
  {
    digitalWrite(Beep, LOW) ;
  }
}


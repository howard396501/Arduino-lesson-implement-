void setup()
{
  pinMode(13, OUTPUT) ;
  pinMode(12, OUTPUT) ;
  pinMode(11, OUTPUT) ;
}
void loop()
{
  int val ;
  int dat ;
  val = analogRead(A0) ;
  dat = (125 * val) >> 8 ; //全部位元向右移動八位
  if(dat <= 25)
  {
    digitalWrite(13, HIGH) ;
    digitalWrite(12, LOW) ;
    digitalWrite(11, LOW) ;
  }
  else if(dat >= 26 && dat <= 29)
  {
    digitalWrite(13, LOW) ;
    digitalWrite(12, HIGH) ;
    digitalWrite(11, LOW) ;
  }
  else if(dat >= 30)
  {
    digitalWrite(13, LOW) ;
    digitalWrite(12, LOW) ;
    digitalWrite(11, HIGH) ;
  }
}


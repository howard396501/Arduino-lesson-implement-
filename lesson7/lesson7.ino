int buzzer = 8 ;
void setup()
{
  pinMode(buzzer, OUTPUT) ;
}
void loop()
{
  unsigned char i, j ;
  while(1)
  {
    for( i = 0 ; i < 80 ; i++ ) //一個頻率的聲音
    {
      digitalWrite(buzzer, HIGH) ; //發聲
      delay(1) ;
      digitalWrite(buzzer, LOW) ;
      delay(1) ;
    }
    for( i = 0 ; i < 100 ; i++ ) //另一個頻率的聲音
    {
      digitalWrite(buzzer, HIGH) ; //發聲
      delay(2) ;
      digitalWrite(buzzer, LOW) ;
      delay(2) ;
    }
  }
}


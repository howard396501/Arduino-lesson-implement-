float temp ;
void setup()
{
  Serial.begin(9600) ;
}
void loop()
{
  int V1 = analogRead(A0) ;
  float vol = V1 * (5.0 / 1023.0) ;
  if(vol == temp)
  {
    temp = vol ; //上次電壓和下次電壓不一樣就不輸出於畫面
  }
  else
  {
    Serial.print(vol) ;
    Serial.println(" V") ;
    temp = vol ; 
    delay(1000) ;
  }
}


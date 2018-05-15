int potpin = A0 ;
int ledpin = 11 ;
int val = 0 ; //暫存來自可變電阻的變量值
void setup()
{
  pinMode(ledpin, OUTPUT) ; 
  Serial.begin(9600) ;
}
void loop()
{
  val = analogRead(potpin) ; //讀取可變電阻的模擬值
  Serial.println(val) ; //顯示val值在Serial Monitor
  analogWrite(ledpin, val/4) ; //透過可變電阻調整LED亮度
  delay(10) ;
}


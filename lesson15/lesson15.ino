int potPin = A0 ;
void setup()
{
  Serial.begin(9600) ;
}
void loop()
{
  int val ;
  int dat ;
  val = analogRead(A0) ;
  dat = (125 * val) >> 8 ; //全部位元向右移動八位
  Serial.print("AnalogRead :") ;
  Serial.println(val) ;
  Serial.print("Temperature :") ;
  Serial.print(dat) ;
  Serial.println("C") ;
  delay(500) ;
}

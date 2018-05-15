int val ;
int ledpin = 13 ;
void setup()
{
  Serial.begin(9600) ;
  pinMode(ledpin, OUTPUT) ;
}

void loop()
{
  val = Serial.read() ; //讀取PC給Arduino的指令
  if(val == 'R')
  {
    digitalWrite(ledpin, HIGH) ;
    delay(500) ;
    digitalWrite(ledpin, LOW) ;
    delay(500) ;
    Serial.println("Hello World!") ;
  }
}


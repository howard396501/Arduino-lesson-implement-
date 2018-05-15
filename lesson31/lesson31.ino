#include <IRremote.h>
const int irReceiverPin = 2 ;
IRrecv irrecv(irReceiverPin) ; 
decode_results results ;
int ledPin = 7 ;
void setup()
{
  Serial.begin(9600) ;
  irrecv.enableIRIn() ;
  pinMode(ledPin, OUTPUT) ;
}
void loop()
{
  if(irrecv.decode(&results)) //解碼成功，收到紅外線訊號
  {
    Serial.print("irCode: ") ;
    Serial.print(results.value, HEX) ; //紅外線解碼
    Serial.print(", bits: ") ;
    Serial.println(results.bits) ; 
    irrecv.resume() ; //繼續收下一組紅外線訊號
  }
}


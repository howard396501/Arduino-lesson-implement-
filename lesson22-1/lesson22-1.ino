#include <Keypad.h>
 
#define KEY_ROWS 4 // 按鍵模組的列數
#define KEY_COLS 4 // 按鍵模組的行數
int ledPin = 2 ; 

char keymap[KEY_ROWS][KEY_COLS] = 
{
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
} ;
 
byte colPins[KEY_COLS] = {9, 8, 7, 6} ;     //行1~4接腳。
byte rowPins[KEY_ROWS] = {13, 12, 11, 10} ; //列1~4接腳。 
 
//語法：Keypad(makeKeymap(按鍵字元的二維陣列), 模組列接腳, 模組行接腳, 模組列數, 模組行數)
Keypad myKeypad = Keypad(makeKeymap(keymap), rowPins, colPins, KEY_ROWS, KEY_COLS) ;
boolean blink = false ; 
void setup()
{
  pinMode(ledPin, OUTPUT) ;
  digitalWrite(ledPin, HIGH) ;
  myKeypad.addEventListener(keypadEvent) ;
}
void loop()
{
  char key = myKeypad.getKey() ;
  if(blink)
  {
    digitalWrite(ledPin, !digitalRead(ledPin)) ;
    delay(100) ;
  }
}
void keypadEvent(KeypadEvent key)
{
  switch(myKeypad.getState())
  {
    case PRESSED :
      switch(key)
      {
        case '#' : digitalWrite(ledPin, !digitalRead(ledPin)) ;
                   break ;
        case '*' : digitalWrite(ledPin, !digitalRead(ledPin)) ;
                   break ;
      }
    break ;
    
    case RELEASED :
      switch(key)
      {
        case '*' : digitalWrite(ledPin, !digitalRead(ledPin)) ;
                   blink = false ;
                   break ;
      }
    break ;
    case HOLD :
      switch(key)
      {
        case '*' : blink = true ;
                   break ;
      }
    break ;
  }
}


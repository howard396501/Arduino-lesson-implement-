#include <Keypad.h>
 
#define KEY_ROWS 4 // 按鍵模組的列數
#define KEY_COLS 4 // 按鍵模組的行數
 

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
 
void setup()
{
  Serial.begin(9600) ;
}
  
void loop()
{
  //按鍵的字元
  char key = myKeypad.getKey() ;
  if (key)
  { 
    Serial.println(key) ; 
  }
}
 

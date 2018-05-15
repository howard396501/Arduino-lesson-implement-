byte seven_seg_digits[10][7] = {{ 1,1,1,1,1,1,0 }, // = 0
                                { 0,1,1,0,0,0,0 }, // = 1
                                { 1,1,0,1,1,0,1 }, // = 2
                                { 1,1,1,1,0,0,1 }, // = 3
                                { 0,1,1,0,0,1,1 }, // = 4
                                { 1,0,1,1,0,1,1 }, // = 5
                                { 1,0,1,1,1,1,1 }, // = 6
                                { 1,1,1,0,0,0,0 }, // = 7
                                { 1,1,1,1,1,1,1 }, // = 8
                                { 1,1,1,1,0,1,1 }  // = 9
                               }; 
void setup()
{
  pinMode(2, OUTPUT) ; 
  pinMode(3, OUTPUT) ; 
  pinMode(4, OUTPUT) ; 
  pinMode(5, OUTPUT) ; 
  pinMode(6, OUTPUT) ; 
  pinMode(7, OUTPUT) ; 
  pinMode(8, OUTPUT) ; 
  pinMode(9, OUTPUT) ; 
  digitalWrite(9, 0);  // 關閉小數點
}

// 在七段顯示器上顯示指定的一個數字
void sevenSegWrite(byte digit)
{
  byte pin = 2 ;
  for (byte seg = 0 ; seg < 7 ; ++seg)
  {
    digitalWrite(pin, seven_seg_digits[digit][seg]);
    ++pin;
  }
}
          
void loop()
{
  for (byte digit = 10 ; digit > 0 ; --digit)
  {
    delay(1000) ;
    sevenSegWrite(digit - 1) ;
  }
  
  delay(4000);
}

//共陽極、0開1關
#define ASeg 12
#define BSeg 8
#define CSeg 4
#define DSeg 6
#define ESeg 7
#define FSeg 11
#define GSeg 3


#define CA1 2
#define CA2 9
#define CA3 10
#define CA4 13

//定義每個七段顯示器的延遲時間, 預設1ms 
int delay_time = 1;

void setup() {
  pinMode(ASeg, OUTPUT);
  pinMode(BSeg, OUTPUT);
  pinMode(CSeg, OUTPUT);
  pinMode(DSeg, OUTPUT);
  pinMode(ESeg, OUTPUT);
  pinMode(FSeg, OUTPUT);
  pinMode(GSeg, OUTPUT);
  pinMode(CA1, OUTPUT);
  pinMode(CA2, OUTPUT);
  pinMode(CA3, OUTPUT);
  pinMode(CA4, OUTPUT);
}
 
void loop()
{
  for(unsigned int number = 0 ; number < 10000 ; number++)
  {
    unsigned long startTime = millis() ; //每一秒計數一次
    for(unsigned long elapsed = 0 ; elapsed < 1000 ; elapsed = millis() - startTime )
    {
      // 顯示個位數
      pickDigit(1) ;
      pickNumber(number % 10) ;
      delay(delay_time) ;
      // 顯示十位數
      pickDigit(2) ;
      pickNumber((number / 10) % 10) ;
      delay(delay_time) ;
      // 顯示百位數
      pickDigit(3) ;
      pickNumber((number / 100) % 10) ;
      delay(delay_time) ;
      // 顯示千位數
      pickDigit(4) ;
      pickNumber((number / 1000) % 10) ;
      delay(delay_time) ;
    }
  }
}
void pickDigit(int x)
{
  digitalWrite(CA1, LOW) ; //LOW關掉、HIGH打開
  digitalWrite(CA2, LOW) ;
  digitalWrite(CA3, LOW) ;
  digitalWrite(CA4, LOW) ;
  switch(x)
  {
    case 1 : digitalWrite(CA1, HIGH) ;    break ;
    case 2 : digitalWrite(CA2, HIGH) ;    break ;
    case 3 : digitalWrite(CA3, HIGH) ;    break ;
    case 4 : digitalWrite(CA4, HIGH) ;    break ; 
  }
}
void pickNumber(int x)
{
  switch(x)
  {
    case 1: one() ;    break ;
    case 2: two() ;    break ;
    case 3: three() ;  break ;
    case 4: four() ;   break ;
    case 5: five() ;   break ;
    case 6: six() ;    break ;
    case 7: seven() ;  break ;
    case 8: eight() ;  break ;
    case 9: nine() ;   break ;
    default : zero() ; break ;
  }
}

void one()
{
  digitalWrite(ASeg, HIGH) ;
  digitalWrite(BSeg, LOW) ;
  digitalWrite(CSeg, LOW) ;
  digitalWrite(DSeg, HIGH) ;
  digitalWrite(ESeg, HIGH) ;
  digitalWrite(FSeg, HIGH) ;
  digitalWrite(GSeg, HIGH) ; 
}


void two() 
{
  digitalWrite(ASeg, LOW) ;
  digitalWrite(BSeg, LOW) ;
  digitalWrite(CSeg, HIGH) ;
  digitalWrite(DSeg, LOW) ;
  digitalWrite(ESeg, LOW) ;
  digitalWrite(FSeg, HIGH) ;
  digitalWrite(GSeg, LOW) ; 
}

 
void three() 
{
  digitalWrite(ASeg, LOW) ;
  digitalWrite(BSeg, LOW) ;
  digitalWrite(CSeg, LOW) ;
  digitalWrite(DSeg, LOW) ;
  digitalWrite(ESeg, HIGH) ;
  digitalWrite(FSeg, HIGH) ;
  digitalWrite(GSeg, LOW) ; 
}

 
void four() 
{
  digitalWrite(ASeg, HIGH) ;
  digitalWrite(BSeg, LOW) ;
  digitalWrite(CSeg, LOW) ;
  digitalWrite(DSeg, HIGH) ;
  digitalWrite(ESeg, HIGH) ;
  digitalWrite(FSeg, LOW) ;
  digitalWrite(GSeg, LOW) ; 
}


void five() 
{
  digitalWrite(ASeg, LOW) ;
  digitalWrite(BSeg, HIGH) ; 
  digitalWrite(CSeg, LOW) ;
  digitalWrite(DSeg, LOW) ;
  digitalWrite(ESeg, HIGH) ;
  digitalWrite(FSeg, LOW) ;
  digitalWrite(GSeg, LOW) ; 
}


void six() 
{
  digitalWrite(ASeg, LOW) ;
  digitalWrite(BSeg, HIGH) ;
  digitalWrite(CSeg, LOW) ;
  digitalWrite(DSeg, LOW) ;
  digitalWrite(ESeg, LOW) ;
  digitalWrite(FSeg, LOW) ;
  digitalWrite(GSeg, LOW) ; 
}
 

void seven() 
{
  digitalWrite(ASeg, LOW) ;
  digitalWrite(BSeg, LOW) ;
  digitalWrite(CSeg, LOW) ;
  digitalWrite(DSeg, HIGH) ;
  digitalWrite(ESeg, HIGH) ;
  digitalWrite(FSeg, HIGH) ;
  digitalWrite(GSeg, HIGH) ; 
}


void eight() 
{
  digitalWrite(ASeg, LOW) ;
  digitalWrite(BSeg, LOW) ;
  digitalWrite(CSeg, LOW) ;
  digitalWrite(DSeg, LOW) ;
  digitalWrite(ESeg, LOW) ;
  digitalWrite(FSeg, LOW) ;
  digitalWrite(GSeg, LOW) ; 
}
 

void nine() 
{
  digitalWrite(ASeg, LOW) ;
  digitalWrite(BSeg, LOW) ;
  digitalWrite(CSeg, LOW) ;
  digitalWrite(DSeg, LOW) ;
  digitalWrite(ESeg, HIGH) ;
  digitalWrite(FSeg, LOW) ;
  digitalWrite(GSeg, LOW) ; 
}


void zero() 
{
  digitalWrite(ASeg, LOW) ;
  digitalWrite(BSeg, LOW) ;
  digitalWrite(CSeg, LOW) ;
  digitalWrite(DSeg, LOW) ;
  digitalWrite(ESeg, LOW) ;
  digitalWrite(FSeg, LOW) ;
  digitalWrite(GSeg, HIGH) ; 
}

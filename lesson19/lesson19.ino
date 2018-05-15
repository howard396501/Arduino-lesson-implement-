#include "LedControl.h"
LedControl lc=LedControl(12, 11, 10, 1) ;  
unsigned long delaytime = 50 ;
void setup() 
{
        lc.shutdown(0, false) ; //關閉省電模式      
        lc.setIntensity(0, 8) ; //設定亮度(可在0 ~ 15之間)
        lc.clearDisplay(0) ; //清除螢幕
}
 
void loop() 
{ 
    for(int row=0;row<8;row++) 
    {
        for(int col=0;col<8;col++) 
        {      
           lc.setLed(0,row,col,true) ; 
           delay(delaytime) ;  
        }
    }
    for(int row=0;row<8;row++) 
    {
        for(int col=0;col<8;col++) 
        {
           lc.setLed(0,row,col,false) ; 
           delay(delaytime) ;
        }
    }
}

#include <SPI.h>
#include <MFRC522.h>     
 
#define RST_PIN      A0        
#define SS_PIN       10        //晶片選擇腳位
 
MFRC522 mfrc522(SS_PIN, RST_PIN) ;  
 
void setup() 
{
  Serial.begin(9600) ;
  Serial.println("RFID is ready to read your card!") ;
  SPI.begin() ;
  mfrc522.PCD_Init() ;   //初始化MFRC522
}
 
void loop() {
    // 確認是否有新卡片
    if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) 
    {
      byte *id = mfrc522.uid.uidByte ;   //取得卡片的UID
      byte idSize = mfrc522.uid.size ;   //取得UID的長度
       
      Serial.print("PICC type: ") ;      //顯示卡片類型
      //根據卡片回應的SAK值（mfrc522.uid.sak）判斷卡片類型
      MFRC522::PICC_Type piccType = mfrc522.PICC_GetType(mfrc522.uid.sak) ;
      Serial.println(mfrc522.PICC_GetTypeName(piccType)) ;

      Serial.println() ;
      if ( id[0] == 0x2B && id[1] == 0xDB && id[2]== 0xC1 && id[3]== 0xB )
      {
        Serial.println("Welcome, CCU CSIE : Chen-So") ;
      }
      else if ( id[0] == 0xC5 && id[1] == 0xC4 && id[2]== 0x14 && id[3]== 0x28 )
      {
        Serial.println("Welcome, NTUT ERAC : Chen-So") ;
      }
      else
      {
        Serial.println("Unknown people !! Lock up !!!") ;
      }
      mfrc522.PICC_HaltA() ;  //讓卡片進入停止模式
    } 
}

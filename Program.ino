#include <SPI.h> 
#include <MFRC522.h>
#include <TM1637Display.h> 

#define CLK 2
#define DIO 3
#define TEST_DELAY 2000

#define SS_PIN 53
#define RST_PIN 5

MFRC522 mfrc522(SS_PIN, RST_PIN);
TM1637Display display(CLK, DIO);

int contador = 0;
bool deteccao;

int tcrt5000 = 4; 
 
void setup() 
{
  SPI.begin();    
  mfrc522.PCD_Init();   
  pinMode(tcrt5000, INPUT);
  pinMode(8, OUTPUT);
}
 
void loop() 
{
  display.setBrightness(0x0f);
  display.showNumberDec(contador);
    
  deteccao = digitalRead(tcrt5000);
  if(deteccao == LOW){
    contador = contador - 1;
    display.setBrightness(0x0f);
    display.showNumberDec(contador);
  }else{
    ;  
  }
  delay(500);
  String conteudo= "";
  byte letra;

  if ( ! mfrc522.PICC_IsNewCardPresent()) {
    return;
  }

  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) {
    return;
  }
  
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     conteudo.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     conteudo.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  conteudo.toUpperCase();
  if (conteudo.substring(1) == "96 77 C5 EF")
  {
    if (contador == 5){  
      // Travado
    }else{
    contador = contador + 1;
    display.setBrightness(0x0f); 
    display.showNumberDec(contador);
    delay(3000);
    }
  }
  delay(500);
} 

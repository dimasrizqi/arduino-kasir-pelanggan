#include <Keypad.h>
#include <Wire.h>  // Comes with Arduino IDE
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Atur LCD I2C address

const byte ROWS = 4; 
const byte COLS = 4; 

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6}; 
byte colPins[COLS] = {5, 4, 3, 2}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  Serial.begin(9600);
   lcd.begin(20,4);
    lcd.setCursor(0,0); //Mulai dari Karakter 0 dan baris 0
  lcd.print("Arduino1 - Pelanggan");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("Silahkan Pilih Menu"); 
  delay(1000); 

  lcd.setCursor(0,2);
  lcd.print("#:Pesan Menu"); 
  delay(1500);
  
  lcd.setCursor(0,3);
  lcd.print("."); 
  delay(1000);
  lcd.setCursor(0,3);
  lcd.print("..");
  delay(1000);
  lcd.setCursor(0,3);
  lcd.print("...");  
  delay(1000);
  lcd.clear();
  
  //pilihan menu
  lcd.setCursor(0,0);
  lcd.print("A: Pecel Lele & Nasi"); 
  delay(1000); 
  
  lcd.setCursor(0,1);
  lcd.print("B: Nasi Goreng"); 
  delay(1000); 

  lcd.setCursor(0,2);
  lcd.print("C: Ayam Bakar & Nasi"); 
  delay(1000); 

  lcd.setCursor(0,3);
  lcd.print("D: Teh manis"); 
  delay(1000); 
    
}
  
void loop(){
  char customKey = customKeypad.getKey();
  int n = 0;
  if (customKey=='A'){
    Serial.println("aa");
    lcd.setCursor(0,n+1);
    lcd.print("paket A");
  }
   if (customKey=='B'){
    Serial.println('b');
    lcd.println("Paket B");
   }
}

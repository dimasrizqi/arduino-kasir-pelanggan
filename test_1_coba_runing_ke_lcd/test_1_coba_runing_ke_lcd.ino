#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);  // Alamat LCD adalah 0x27
                                     // Mengandung 16 kolom dan
                                     // 2 baris
void setup()
{
  lcd.begin();                      // Inisialisasi LCD 
 
  // Tampilkan pesan ke LCD
 
  lcd.print("Ricki Ananda");
  lcd.setCursor(0, 1);
  lcd.print("YPRTA-KISARAN");
}

void loop()
{
  
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

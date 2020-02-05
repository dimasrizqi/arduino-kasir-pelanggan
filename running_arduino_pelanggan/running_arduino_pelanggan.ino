/*-----( Masukan Library yang dibutuhkan )-----*/
#include <Wire.h>  // Comes with Arduino IDE
#include <LiquidCrystal_I2C.h>


/*-----( Deklarasi Konstanta )-----*/
/*-----( Deklarasi Objek )-----*/
// Konfigurasi LCD address ke 0x3F untuk tampilan 20 karakter dan 4 baris
// Atur pin pada I2C chip untuk koneksi ke LCD:
//                    addr, en,rw,rs,d4,d5,d6,d7,bl,blpol
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Atur LCD I2C address


/*-----( Deklarasi Variabel )-----*/
void setup()   /*----( SETUP: RUNS ONCE )----*/
{
  Serial.begin(9600);  // Mengaktifkan serial

  lcd.begin(20,4);         // inisialisasi LCD dengan 20 karakter dan 4 baris

// ------- Melakukan blink 3 kali (Opsional) -------------
/*
  for(int i = 0; i< 3; i++)
  {
    lcd.backlight();
    delay(250);
    lcd.noBacklight();
    delay(250);
  }
  lcd.backlight(); // Diakhiri dengan backlight on  
*/
//-------- Menulis/menampilkan karakter pada LCD ------------------
  // CATATAN: Posisi Kursor: Baris dan Karakter mulai pada 0  
  //lcd.setCursor(0,0); //Huruf akan mulai pada karakter ke 4 dan baris 0 pada LCD
  //lcd.print("Arduino1 - Pelanggan");
  //delay(2000);
  /*
  lcd.setCursor(2,1);
  lcd.print("From YourHand");
  delay(1000);  
  lcd.setCursor(0,2);
  lcd.print("20 by 4 Line Display");
  lcd.setCursor(3,3);
  delay(2000);   
  lcd.print("GOOD DAY");
  //delay(8000);
  // Tunggu selama 8 detik untuk dapat mengetik karakter pada serial monitor 
  */
  lcd.setCursor(0,0); //Mulai dari Karakter 0 dan baris 0
  lcd.print("Arduino1 - Pelanggan");
  lcd.setCursor(0,1);
  lcd.print("masukan input");  

}/*--(end setup )---*/


void loop()   /*----( LOOP: DIEKSEKUSI TERUS MENERUS )----*/
{
  {
    // ketika karakter datang dari serial port...
    if (Serial.available()) {
      // delay untuk menunggu pesan ditulis pada serial
      //delay(100);
      // Menghapus layar
      lcd.clear();
      // Membaca semua karakter yang diketik pada serial monitor
      while (Serial.available() > 0) {
        // menampilkan setiap karakter ke lcd
        lcd.write(Serial.read());
      }
    }
  }

}/* --(end main loop )-- */

void(* ku_reset) (void) = 0;

void setup() {    
  Serial.begin(9600);
  Serial.println("ini di blok setup Arduino");
  Serial.println("http://saptaji.com");
  delay(1000);

}

void loop()
{
  Serial.println("ini di blok loop Arduino");
  delay(1000);              
  Serial.println("siap-siap reset Arduino");
  Serial.println();
  delay(1000);
  ku_reset();
  Serial.println("ga bakal sampai sini karena udah di-reset");
}

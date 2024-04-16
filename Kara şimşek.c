const int ledPinler[] = {8, 9, 10, 11, 12}; 

//Bekleme sürelerini tanımlıyoruz. 

const int bekleme = 50; 

void setup() { 

  // LEDlerin bağlantılı olduğu pinleri çıkış olarak tanımlıyoruz. 

   for (int led = 0; led < 5; led++) 

   { 

    pinMode(ledPinler[led], OUTPUT); 

   } 

} 

void loop() { 

  for (int led = 0; led < 4; led++) 

    { 

    digitalWrite(ledPinler[led], HIGH); 

    delay(bekleme); 

    digitalWrite(ledPinler[led + 1], HIGH); 

    delay(bekleme); 

    digitalWrite(ledPinler[led], LOW); 

    delay(bekleme*2); 

    } 

for (int led = 4; led > 0; led--) 

   { 

    digitalWrite(ledPinler[led], HIGH);    

    delay(bekleme); 

    digitalWrite(ledPinler[led - 1], HIGH); 

    delay(bekleme); 

    digitalWrite(ledPinler[led], LOW); 

    delay(bekleme*2); 

   } 

  }
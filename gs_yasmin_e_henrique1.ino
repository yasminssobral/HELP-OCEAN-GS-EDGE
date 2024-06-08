#include <Adafruit_LiquidCrystal.h>

int led = 13;
int botao = 2;
int estado = 0;

Adafruit_LiquidCrystal lcd(0);

void setup() {
  lcd.begin(16, 2); 
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
  digitalWrite(botao, HIGH);
}

void loop() {
  estado = digitalRead(botao);

  if (estado == LOW) {
    digitalWrite(led, HIGH); 
    lcd.clear(); 
    lcd.setCursor(0, 0); 
    lcd.print("ALERTA RECEBIDO");
    delay(3000); 

    digitalWrite(led, LOW);
    lcd.clear(); 
    lcd.setCursor(0, 0); 
    
  }
}

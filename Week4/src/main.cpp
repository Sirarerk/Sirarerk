#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#define I2C_SDA 21
#define I2C_SCL 22
#define SW1 15
#define SW2 2
#define SW3 34
#define SW4 35
#define SW5 32
#define SW6 33
#define LED_PIN1 23
#define LED_PIN2 19
#define LED_PIN3 18
#define LED_PIN4 5
#define LED_PIN5 17
#define LED_PIN6 16
#define LED_PIN7 4
#define LED_PIN8 0

    int m1 = 0;
    int m2 = 0;
    int m3 = 0;
    int m4 = 0;
    int m5 = 0;
    int m6 = 0;

LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup(){
    pinMode(LED_PIN1, OUTPUT);
    pinMode(LED_PIN2, OUTPUT);
    pinMode(LED_PIN3, OUTPUT);
    pinMode(LED_PIN4, OUTPUT);
    pinMode(LED_PIN5, OUTPUT);
    pinMode(LED_PIN6, OUTPUT);
    pinMode(LED_PIN7, OUTPUT);
    pinMode(LED_PIN8, OUTPUT);
    pinMode(SW1, INPUT);
    pinMode(SW2, INPUT);
    pinMode(SW3, INPUT);
    pinMode(SW4, INPUT);
    pinMode(SW5, INPUT);
    pinMode(SW6, INPUT);
	lcd.init(I2C_SDA, I2C_SCL); // initialize the lcd to use user defined I2C pins
	lcd.backlight();
	lcd.setCursor(2,1);
	lcd.print("Ready");
  
}
void loop(){
    int S1 = digitalRead(SW1);
    int S2 = digitalRead(SW2);
    int S3 = digitalRead(SW3);
    int S4 = digitalRead(SW4);
    int S5 = digitalRead(SW5);
    int S6 = digitalRead(SW6);


if( S1 == HIGH ){
    m1 = 1;
    m2 = 0;
    m3 = 0;
    m4 = 0;
    m5 = 0;
    m6 = 0;


    }
if( S2 == HIGH ){
    m1 = 0;
    m2 = 1;
    m3 = 0;
    m4 = 0;
    m5 = 0;
    m6 = 0;
    }
if( S3 == HIGH ){
    m1 = 0;
    m2 = 0;
    m3 = 1;
    m4 = 0;
    m5 = 0;
    m6 = 0;
    }
if( S4 == HIGH ){
    m1 = 0;
    m2 = 0;
    m3 = 0;
    m4 = 1;
    m5 = 0;
    m6 = 0;
    }
if( S5 == HIGH ){
    m1 = 0;
    m2 = 0;
    m3 = 0;
    m4 = 0;
    m5 = 1;
    m6 = 0;
    }
if( S6 == HIGH ){
    m1 = 0;
    m2 = 0;
    m3 = 0;
    m4 = 0;
    m5 = 0;
    m6 = 1;
    }
if (m1 == 1){
    lcd.setCursor(3,0);
	lcd.print("1");
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN3, HIGH);
    digitalWrite(LED_PIN4, HIGH);
    digitalWrite(LED_PIN5, HIGH);
    digitalWrite(LED_PIN6, HIGH);
    digitalWrite(LED_PIN7, HIGH);
    digitalWrite(LED_PIN8, HIGH);
}    
else if ( m2 == 1 ){
    lcd.setCursor(3,0);
    lcd.print("2");
    delay(300);
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN4, HIGH);
    digitalWrite(LED_PIN6, HIGH);
    digitalWrite(LED_PIN8, HIGH);
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN7, LOW);
    delay(300);
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN3, HIGH);
    digitalWrite(LED_PIN5, HIGH);
    digitalWrite(LED_PIN7, HIGH);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);

    }
else if( m3 == 1){
    lcd.setCursor(3,0);
    lcd.print("3");
    delay(300);
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, HIGH);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN4, HIGH);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN5, HIGH);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, HIGH);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, HIGH);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, HIGH);
    delay(300);
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
}
else if( m4 == 1){
    lcd.setCursor(3,0);
    lcd.print("4");
    delay(300);
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, HIGH);
    digitalWrite(LED_PIN4, HIGH);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN5, HIGH);
    digitalWrite(LED_PIN6, HIGH);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, HIGH);
    digitalWrite(LED_PIN8, HIGH);
    delay(300);
}
else if(m5 == 1 ){
    lcd.setCursor(3,0);
    lcd.print("5");
    delay(300);
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN3, HIGH);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN3, HIGH);
    digitalWrite(LED_PIN4, HIGH);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN3, HIGH);
    digitalWrite(LED_PIN4, HIGH);
    digitalWrite(LED_PIN5, HIGH);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN3, HIGH);
    digitalWrite(LED_PIN4, HIGH);
    digitalWrite(LED_PIN5, HIGH);
    digitalWrite(LED_PIN6, HIGH);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN3, HIGH);
    digitalWrite(LED_PIN4, HIGH);
    digitalWrite(LED_PIN5, HIGH);
    digitalWrite(LED_PIN6, HIGH);
    digitalWrite(LED_PIN7, HIGH);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN3, HIGH);
    digitalWrite(LED_PIN4, HIGH);
    digitalWrite(LED_PIN5, HIGH);
    digitalWrite(LED_PIN6, HIGH);
    digitalWrite(LED_PIN7, HIGH);
    digitalWrite(LED_PIN8, HIGH);
    delay(300);
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
}
else if (m6 == 1){
    lcd.setCursor(3,0);
    lcd.print("6");
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN3, HIGH);
    digitalWrite(LED_PIN4, HIGH);
    digitalWrite(LED_PIN5, HIGH);
    digitalWrite(LED_PIN6, HIGH);
    digitalWrite(LED_PIN7, HIGH);
    digitalWrite(LED_PIN8, HIGH);
    delay(300);
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
    delay(300);
}

}




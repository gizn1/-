#define BTN_PIN1 3       // кнопка подключена сюда (BTN_PIN --- КНОПКА --- GND)
#define BTN_PIN2 2 
#include "GyverButton.h"
#include <LiquidCrystal.h>
GButton butt1(BTN_PIN1);
GButton butt2(BTN_PIN2);
  int i = 0;
LiquidCrystal lcd(7,8, 9, 10, 11 , 12);

void gorchitca(){
   butt2.tick();

    lcd.setCursor(0,1);
    Serial.println("podsolnuh");
    lcd.print("podsolnuh");
    if (butt2.isClick()){
      digitalWrite(5,0); 
      while(true){
     uint32_t tmr1; 
     uint32_t tmr2;   
   uint32_t  sec = millis() / 1000;      // полное количество секунд
  int timeHours = (sec / 3600ul);        // часы
  int timeMins = (sec % 3600ul) / 60ul;  // минуты

Serial.println(timeHours);
Serial.println(timeMins);
Serial.println(sec);
Serial.println();
if (millis() - tmr1 > 1000 * 10 *3600 *9 ){
   tmr1 = millis();
  digitalWrite(6, !digitalRead(6));
  
  }



}
                                         // увеличивать/уменьшать переменную value с шагом и интервалом
                                 // для примера выведем в порт
  }
  
}

void podsolnuh(){
    butt2.tick();

    lcd.setCursor(0,1);
    Serial.println("podsolnuh");
    lcd.print("podsolnuh");
    if (butt2.isClick()){
      digitalWrite(5,0); 
      while(true){
     uint32_t tmr1; 
     uint32_t tmr2;   
   uint32_t  sec = millis() / 1000;      // полное количество секунд
  int timeHours = (sec / 3600ul);        // часы
  int timeMins = (sec % 3600ul) / 60ul;  // минуты

Serial.println(timeHours);
Serial.println(timeMins);
Serial.println(sec);
Serial.println();
if (millis() - tmr1 > 1000 * 10 *3600 *13 ){
   tmr1 = millis();
  digitalWrite(6, !digitalRead(6));
  
  }


}
                                         // увеличивать/уменьшать переменную value с шагом и интервалом
                                 // для примера выведем в порт
  }
  
}
typedef // создаем новый прототип (в данном случае указатель на функцию)
        int // возвращаемое значение (такое же как в функциях)
            (*func) // имя прототипа (в коде употребляется без звездочки)
                   (const int, const int);

void setup() {
  Serial.begin(9600);
  pinMode(8, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(6,OUTPUT);
   
  lcd.begin(16, 2);
  lcd.setCursor(0,1);
lcd.print("pp");

}
void loop() {
  butt1.tick();
  butt2.tick();
  lcd.setCursor(0,0);
  lcd.print("podsolnuh");// обязательная функция отработки. Должна постоянно опрашиваться
  func arr[2];

  arr[0] = gorchitca;
  arr[1] = podsolnuh;
  if (i>1){
    i = 0;
  }
  arr[i](1,2) ;
  
  if (butt1.isClick()){ 

    Serial.println("Click");
     Serial.println(i);
     
     arr[i](1,2) ;
    i++;
  }

}
  

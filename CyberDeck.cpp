#include <USB.h>
#include <USBHIDKeyboard.h>
#include <Wire.h>
#include <U8g2lib.h>

// Ініціалізація USB HID клавіатури
USBHIDKeyboard Keyboard;

// Ініціалізація OLED дисплея 128x64 (I2C)
// Замініть U8G2_SSD1306_128X64_NONAME_F_HW_I2C на вашу модель, якщо потрібно
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

// Приклад пінів для кнопок (замініть на реальні піни з вашої схеми)
const int keyPins[] = {4, 5, 6, 7, 8, 9, 10}; 
const int numKeys = 7;

// Піни для енкодера
const int encoderPinA = 2;
const int encoderPinB = 3;

void setup() {
  // Налаштування пінів кнопок як вхід з підтяжкою до живлення
  for (int i = 0; i < numKeys; i++) {
    pinMode(keyPins[i], INPUT_PULLUP);
  }

  // Налаштування пінів енкодера
  pinMode(encoderPinA, INPUT_PULLUP);
  pinMode(encoderPinB, INPUT_PULLUP);

  // Запуск дисплея
  u8g2.begin();
  
  // Запуск USB HID
  Keyboard.begin();
  USB.begin();
}

void loop() {
  // Опитування кнопок
  for (int i = 0; i < numKeys; i++) {
    if (digitalRead(keyPins[i]) == LOW) { // Кнопка натиснута
      // Приклад: кожна кнопка надсилає певну цифру або комбінацію
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press('1' + i);
      delay(50); // Захист від дребезгу
      Keyboard.releaseAll();
      while(digitalRead(keyPins[i]) == LOW); // Чекаємо відпускання
    }
  }

  // Оновлення інформації на екрані
  u8g2.clearBuffer();					
  u8g2.setFont(u8g2_font_nc_tr08_tf);	// Вибір шрифту
  u8g2.drawStr(0, 10, "ESP32-C6 Macropad");
  u8g2.drawStr(0, 30, "Status: Active");
  u8g2.sendBuffer();					
  
  delay(10);
}
/* 
 * File:   oled.cpp
 * Author: Malcolm Loudon <Malcolm Loudon at Massey University>
 *
 * Created on 31 March 2017, 9:42 AM
 */

#include "oled.h"

// Amica SDA = 4 = D2, SCL = 5 = D1

U8G2_SH1106_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, 5, 4);

void init_oled() {
    u8g2.begin();
    //u8g2.setFont(u8g2_font_ncenB14_tr); // choose a suitable font
    u8g2.setFont(u8g2_font_crox4t_tf);
    //u8g2.setFont(u8g2_font_helvR08_tr);
    //u8x8.setFont(u8x8_font_chroma48medium8_r);
    //u8g2.drawStr(3, 20, "ESP8266 WiFi"); // write something to the internal memory
    u8g2.setCursor(3,20);
    u8g2.print(F("ESP8266 WiFi"));
    u8g2.sendBuffer();
    delay(2000);
    u8g2.setFont(u8g2_font_helvR08_tr);
    u8g2.clear();
    u8g2.setCursor(3,20);
    u8g2.print(F("System started!"));
    u8g2.sendBuffer();
}

void printF8_oled(const __FlashStringHelper *str, u8g2_uint_t x, u8g2_uint_t y){
    u8g2.setFont(u8g2_font_helvR08_tr);
    u8g2.setCursor(x, y);
    u8g2.print(str);
}

void update_oled(){
    u8g2.sendBuffer();
}
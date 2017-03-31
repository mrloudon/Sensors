#include <Arduino.h>
#include "oled.h"

const int unsigned long BAUD = 9600;

void setup(){
    Serial.begin(BAUD);
    init_oled();
    printF8_oled(F("Flash String"), 3, 35);
    update_oled();
}

void loop(){

}


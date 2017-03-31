/* 
 * File:   oled.h
 * Author: Malcolm Loudon <Malcolm Loudon at Massey University>
 *
 * Created on 31 March 2017, 9:42 AM
 */

#ifndef OLED_H
#define OLED_H

#include <U8g2lib.h>
#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

#include <WString.h>

#ifdef __cplusplus
extern "C" {
#endif

    extern void init_oled();
    extern void update_oled();
    extern void printF8_oled(const __FlashStringHelper *str, u8g2_uint_t x, u8g2_uint_t y);

#ifdef __cplusplus
}
#endif

#endif /* OLED_H */


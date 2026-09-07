#ifndef UTILITIES_H
#define UTILITIES_H

#include <stdint.h>
#include <xc.h>
#include <pic32cm5164LS00048.h>

void simple_delay(uint32_t);
void LED_on();
void LED_off();
void toggle_LED();

#endif
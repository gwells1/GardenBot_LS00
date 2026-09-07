#ifndef USART_H
#define USART_H

#include <stdint.h>
#include <xc.h>
#include "definitions.h"

void init_USART(void);
void USART_sendChar(char);
void USART_sendString(char *);
//void SERCOM1_Handler(void);

#endif
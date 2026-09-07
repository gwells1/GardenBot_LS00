#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#include <xc.h>
#include <pic32cm5164LS00048.h>

//Basic IO Pin Definitions
#define LED_PIN         (uint32_t)1U << 15U            //Pin PA15
#define SW_PIN          (uint32_t)1U << 23U            //Pin  PA23

//USART Pin Definitions (CDC Connection, SERCOM3)
#define USART_TX_PIN    (uint32_t)1U << 8U             //Pin PB08
#define USART_RX_PIN    (uint32_t)1U << 9U             //Pin PB09

//SPI Pin Definitions
#define SPI_SDI         (uint32_t)1U << 11U            //PIN PA11
#define SPI_SDO         (uint32_t)1U << 8U             //PIN PA08
#define SPI_SCK         (uint32_t)1U << 9U             //PIN PA09
#define SPI_SS          (uint32_t)1U << 10U            //PIN PA10

void init_system(void);
void init_ports(void);
void init_OSCCTRL(void);
void init_GCLK(void);

#endif
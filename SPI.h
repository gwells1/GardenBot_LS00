#ifndef SPI_H
#define SPI_H

void init_SPI(void);
void en_wClick_SS(void);
void dis_wClick_SS(void);
char spi_data_exchange(uint8_t);

#endif
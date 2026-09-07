/**
 * @file main.c
 * @author greg
 * @date 2026-03-31
 * @brief Main function
 */

#include "definitions.h"
#include <pic32cm5164LS00048.h>
#include <stdint.h>

int main(){

    init_system();
    init_USART();
    //init_SPI();

     //send_string("SPI Weather Click Example\n");
     //send_string("Initializing Weather Click\n");
     //Begin by reading the WeatherClick's Compensation Parameters
     //read_wClick_T_Params();
     //read_wClick_P_Params();
     //read_wClick_H_Params();
     //init_wClick();

    while(1){

        toggle_LED();
        USART_sendString("USART Message\n ");
        //USART_sendChar('c');
        simple_delay(1200000);
    }

    return 0;
}

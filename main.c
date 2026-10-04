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
    init_SPI();

     USART_sendString("SPI Weather Click Example\n");                       //Program appears to be tripping an interrupt at this point, from here it jumps to the dummy_handler function in the startup_pic32cm5164ls00048.c file
     USART_sendString("Initializing Weather Click\n");
     //Begin by reading the WeatherClick's Compensation Parameters
     read_wClick_T_Params();
     read_wClick_P_Params();
     read_wClick_H_Params();
     USART_sendString("\r\n\r\nPIC32_LS00 Weather Station\r\n");
     USART_sendString("BME280 Environmental Sensor Demo");
     read_wClick_ID();

    while(1){

        toggle_LED();
        init_wClick();
        read_wClick_temp();
        read_wClick_press();
        read_wClick_hum();
        calc_wClick_temp();
        calc_wClick_press();
        calc_wClick_hum();
        print_wClick_results();
        simple_delay(1200000);
    }

    return 0;
}

#include "definitions.h"

//Create a database for weather_click register addresses and commands
const uint8_t   DUMMY_DATA = 0x00;
uint8_t         cmd_deviceID[2] = {0xD0, DUMMY_DATA};
uint8_t         deviceID[2];
uint8_t         cmd_initialize[7] = {0x72, 0x01, 0x74, 0x25, 0x75, 0x80, DUMMY_DATA};
uint8_t         cmd_temp[4] = {0xFA, 0xFB, 0xFC, DUMMY_DATA};
uint8_t         temp[4];
uint8_t         cmd_press[4] = {0xF7, 0xF8, 0xF9, DUMMY_DATA};
uint8_t         press[4];
uint8_t         cmd_hum[3] = {0xFD, 0xFE, DUMMY_DATA};
uint8_t         hum[3];
uint8_t         cmd_uDigT[3] = {0x88, 0x89, DUMMY_DATA};
uint8_t         cmd_sDigT[5] = {0x8A, 0x8B, 0x8C, 0x8D, DUMMY_DATA};
uint8_t         uDigT[3];
uint8_t         sDigT[5];
uint8_t         cmd_uDigP[3] = {0x8E, 0x8F, DUMMY_DATA};
uint8_t         cmd_sDigP[17] = {0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, DUMMY_DATA};
uint8_t         uDigP[3];
uint8_t         sDigP[17];
uint8_t         cmd_uDigH[3] = {0xA1, 0xE3, DUMMY_DATA};
uint8_t         cmd_sDigH[7] = {0xE1, 0xE2, 0xE4, 0xE5, 0xE6, 0xE7, DUMMY_DATA};
uint8_t         uDigH[3];
uint8_t         sDigH[7];
int32_t         t_fine;
double          T,P;
uint32_t        H;
typedef union {
    int32_t raw;
    struct{
        signed byte0 : 8;
        signed byte1 : 8;
        signed byte2 : 8;
        signed byte3 : 8;
    };
} raw_data_t;
raw_data_t          temp_raw, press_raw, hum_raw;


//ToDo: Identify the proper way to initialize the weather clock
//ToDo: Identify how to read and store measured values
//ToDo: Read Section 4.2.3 regarding "Compensation"
void init_wClick(){
    for(int i=0; i<7; i++){
        spi_data_exchange(cmd_initialize[i]);
    }
}

void read_wClick_ID(void){
    uint8_t i;
    for(i=0 ; i<2 ; i++){
        deviceID[i] = spi_data_exchange(cmd_deviceID[i]);
    }
}

void read_wClick_T_Params(void){
    //Quiery the device for the first temperature compensation parameter
    uint8_t i;
    uint8_t j;
    for(i=0; i<3 ; i++){
        uDigT[i] = spi_data_exchange(cmd_uDigT[i]);
    }
    for(j=0; j<5 ; j++){
        sDigT[j] = spi_data_exchange(cmd_uDigT[j]);
    }
}

void read_wClick_P_Params(void){
    //Quiery the device for the first pressure compensation parameter
    uint8_t i;
    uint8_t j;
    for(i=0; i<3 ; i++){
        uDigP[i] = spi_data_exchange(cmd_uDigP[i]);
    }
    for(j=0; j<17; j++){
        sDigP[j] = spi_data_exchange(cmd_sDigP[j]);
    }
}

void read_wClick_H_Params(void){
    //Quiery the device for the first pressure compensation parameter
    uint8_t i;
    uint8_t j;
    for(i=0; i<3 ; i++){
        uDigH[i] = spi_data_exchange(cmd_uDigH[i]);
    }
    for(j=0; j<7; j++){
        sDigH[j] = spi_data_exchange(cmd_sDigH[j]);
    }
}

void read_wClick_temp(void){
    uint8_t i;
    for(i=0 ; i<4 ; i++){
        temp[i] = spi_data_exchange(cmd_temp[i]);
    }
}

void read_wClick_press(void){
    uint8_t i;
    for(i=0 ; i<4 ; i++){
        press[i] = spi_data_exchange(cmd_press[i]);
    }
}

void read_wClick_hum(void){
    uint8_t i;
    for(i=0 ; i<3 ; i++){
        hum[i] = spi_data_exchange(cmd_hum[i]);
    }
}

void print_wClick_results(void){
    //Print the device ID to the terminal
    USART_sendString("\r\nBME280 Device ID: 0x");
    USART_sendChar(deviceID[1]);
    USART_sendString("\r\n");
    //Print the Temperature to the terminal
    USART_sendString("Temperature: ");
    USART_sendString("25");            //Placeholder for calculated temperature
    USART_sendString("degC\r\n");
    //Print the Pressure to the terminal
    USART_sendString("Pressure: ");
    USART_sendString("100000");            //Placeholder for calculated pressure
    USART_sendString("Pa\r\n");
    //Print the Humidity to the terminal
    USART_sendString("Humidity: ");
    USART_sendString("25");            //Placeholder for calculated humidity
    USART_sendString("%%\r\n");
}

void calc_wClick_temp(void){
    double var1, var2;
    temp_raw.byte2 = temp[1];
    temp_raw.byte1 = temp[2];
    temp_raw.byte0 = temp[3];
    temp_raw.raw = temp_raw.raw >> 4;
    uint16_t digT1 = (uDigT[2] << 8) + (uDigT[1]);
    int16_t digT2 = (sDigT[2] << 8) + (sDigT[1]);
    int16_t digT3 = (sDigT[4] << 8) + (sDigT[3]);
    var1 = (((double)temp_raw.raw) / 16384.0 - ((double)digT1) / 1024.0) *
        ((double)digT2);
    var2 = ((((double)temp_raw.raw) / 131072.0 - ((double)digT1) / 8192.0) *
        (((double)temp_raw.raw) / 131072.0 - ((double)digT1) / 8192.0)) *
        ((double)digT3);
    t_fine = (int32_t)(var1 + var2);
    T = (var1 + var2) / 5120.0;
}

void calc_wClick_press(void){
    double var1, var2;
    press_raw.byte2 = press[1];
    press_raw.byte1 = press[2];
    press_raw.byte0 = press[3];
    press_raw.raw = press_raw.raw >> 4;
    uint16_t digP1 = (uDigP[2] << 8) + (uDigP[1]);
    int16_t digP2 = (sDigP[2] << 8) + (sDigP[1]);
    int16_t digP3 = (sDigP[4] << 8) + (sDigP[3]);
    int16_t digP4 = (sDigP[6] << 8) + (sDigP[5]);
    int16_t digP5 = (sDigP[8] << 8) + (sDigP[7]);
    int16_t digP6 = (sDigP[10] << 8) + (sDigP[9]);
    int16_t digP7 = (sDigP[12] << 8) + (sDigP[11]);
    int16_t digP8 = (sDigP[14] << 8) + (sDigP[13]);
    int16_t digP9 = (sDigP[16] << 8) + (sDigP[15]);
    var1 = ((double)t_fine / 2.0) -64000.0;
    var2 = var1 * var1 * ((double)digP6) /32768.0;
    var2 = var2 + var1 * ((double)digP5) *2.0;
    var2 = (var2 / 4.0) + (((double)digP4) *65536.0);
    var1 = (((double)digP3) * var1 * var1 / 524288.0 + ((double)digP2) *
    var1) / 524288.0;
    var1 = (1.0 + var1 / 32768.0) * ((double)digP1);
    if (var1 == 0.0)
    {
    P = 0;
    }
    P = 1048576.0 - (double)press_raw.raw;
    P = (P - (var2 / 4096.0)) * 6250.0 / var1;
    var1 = ((double)digP9) * P * P/ 2147483648.0;
    var2 = P * ((double)digP8) /32768.0;
    P = P + (var1 + var2 +((double)digP7)) / 16.0;
}

void calc_wClick_hum(void){
    int32_t var1;
    hum_raw.byte1 = hum[1];
    hum_raw.byte0 = hum[2];
    uint8_t digH1 = uDigH[1];
    int16_t digH2 = (sDigH[2] << 8) + (sDigH[1]);
    uint8_t digH3 = uDigH[2];
    int16_t digH4 = (sDigH[3] << 4) + (sDigH[4] & 0x0F);
    int16_t digH5 = (sDigH[5] << 4) + ((sDigH[4] >> 4) & 0x0F);
    int8_t digH6 = sDigH[6];
    var1 = (t_fine - ((int32_t) 76000));
    var1 = (((((temp_raw.raw << 14) - (((int32_t) digH4) << 20) -
    (((int32_t) digH5) * var1)) + ((int32_t) 16384)) >> 15) *
    (((((((var1 * ((int32_t) digH6)) >> 10) *
    (((var1 * ((int32_t) digH3)) >> 11) + ((int32_t)32768))) >> 10) +
    ((int32_t) 2097152)) * ((int32_t)digH2) + 8192) >> 14));
    var1 = (var1 - (((((var1 >> 15) * (var1 >> 15)) >> 7) *
    ((int32_t) digH1))>> 4));
    var1 = (var1 < 0 ? 0 :var1);
    var1 = (var1 > 419430400 ? 419430400 : var1);
    H = (uint32_t) (var1 >> 12);
    H = H / 1024.0;
}
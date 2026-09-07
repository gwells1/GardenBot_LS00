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

void read_wClick_T_Params(void){
    //Quiery the device for the first temperature compensation parameter
    uint8_t i;
    uint8_t j;
    for(i=0; i<3 ; i++){
        uDigT[i] = spi_data_exchange(cmd_uDigT[i]);
    }
    for(j=0; j<3 ; j++){
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
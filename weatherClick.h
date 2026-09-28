#ifndef WEATHERCLICK_H
#define WEATHERCLICK_H

//function that initializes the Weather Click
void init_wClick(void);
//functions that read the various compensation parameters of the BME280
void read_wClick_T_Params(void);
void read_wClick_P_Params(void);
void read_wClick_H_Params(void);

void read_wClick_ID(void);

void read_wClick_temp(void);
void read_wClick_press(void);
void read_wClick_hum(void);

void print_wClick_results(void);

void calc_wClick_temp(void);
void calc_wClick_press(void);
void calc_wClick_hum(void);
#endif
#include "definitions.h"

// 'C' source line config statements

// Config Source code for XC32 compiler.
// USER_WORD_0
#pragma config NVMCTRL_SULCK = 0x7 // Enter Hexadecimal value
#pragma config NVMCTRL_NSULCK = 0x6 // Enter Hexadecimal value
#pragma config BOD33USERLEVEL = 0x6 // Enter Hexadecimal value
#pragma config BOD33_DIS = CLEAR
#pragma config BOD33_ACTION = 0x1 // Enter Hexadecimal value
#pragma config WDT_RUNSTDBY = CLEAR
#pragma config WDT_ENABLE = CLEAR
#pragma config WDT_ALWAYSON = CLEAR
#pragma config WDT_PER = 0xB // Enter Hexadecimal value

// USER_WORD_1
#pragma config WDT_WINDOW = 0xB // Enter Hexadecimal value
#pragma config WDT_EWOFFSET = 0xB // Enter Hexadecimal value
#pragma config WDT_WEN = CLEAR
#pragma config BOD33_HYST = CLEAR
#pragma config IDAU_RXN = CLEAR
#pragma config NVMCTRL_DXN = SET

// USER_WORD_2
#pragma config IDAU_AS = 0x400 // Enter Hexadecimal value
#pragma config IDAU_ANSC = 0x7F // Enter Hexadecimal value
#pragma config IDAU_DS = 0x20 // Enter Hexadecimal value

// USER_WORD_3
#pragma config IDAU_RS = 0x100 // Enter Hexadecimal value
#pragma config NVMCTRL_URWEN = SET

// USER_WORD_4
#pragma config NONSECA_PAC = CLEAR
#pragma config NONSECA_PM = CLEAR
#pragma config NONSECA_MCLK = SET
#pragma config NONSECA_RSTC = CLEAR
#pragma config NONSECA_OSCCTRL = CLEAR
#pragma config NONSECA_OSC32KCTRL = CLEAR
#pragma config NONSECA_SUPC = CLEAR
#pragma config NONSECA_GCLK = SET
#pragma config NONSECA_WDT = CLEAR
#pragma config NONSECA_RTC = SET
#pragma config NONSECA_EIC = CLEAR
#pragma config NONSECA_FREQM = CLEAR
#pragma config NONSECA_PORT = SET
#pragma config NONSECA_AC = CLEAR

// USER_WORD_5
#pragma config NONSECB_IDAU = CLEAR
#pragma config NONSECB_DSU = SET
#pragma config NONSECB_NVMCTRL = CLEAR
#pragma config NONSECB_DMAC = CLEAR
#pragma config NONSECB_USB = CLEAR

// USER_WORD_6
#pragma config NONSECC_EVSYS = CLEAR
#pragma config NONSECC_SERCOM0 = CLEAR
#pragma config NONSECC_SERCOM1 = CLEAR
#pragma config NONSECC_SERCOM2 = CLEAR
#pragma config NONSECC_SERCOM3 = SET
#pragma config NONSECC_SERCOM4 = CLEAR
#pragma config NONSECC_SERCOM5 = CLEAR
#pragma config NONSECC_TC0 = CLEAR
#pragma config NONSECC_TC1 = CLEAR
#pragma config NONSECC_TC2 = CLEAR
#pragma config NONSECC_TCC0 = CLEAR
#pragma config NONSECC_TCC1 = CLEAR
#pragma config NONSECC_TCC2 = CLEAR
#pragma config NONSECC_TCC3 = CLEAR
#pragma config NONSECC_ADC = CLEAR
#pragma config NONSECC_DAC = CLEAR
#pragma config NONSECC_PTC = SET
#pragma config NONSECC_TRNG = CLEAR
#pragma config NONSECC_CCL = CLEAR
#pragma config NONSECC_I2S = CLEAR
#pragma config NONSECC_OPAMP = CLEAR
#pragma config NONSECC_TRAM = CLEAR

// USER_WORD_7
#pragma config BOOTROM_CDIROFFSET = 0x0 // Enter Hexadecimal value

// USER_WORD_8
#pragma config BOOTROM_USERCRC = 0xE6B63D17 // Enter Hexadecimal value

// BOCOR_WORD_0
#pragma config IDAU_BNSC = 0x0 // Enter Hexadecimal value

// BOCOR_WORD_1
#pragma config BOOTROM_BOOTOPT = 0x0 // Enter Hexadecimal value
#pragma config IDAU_BOOTPROT = 0x0 // Enter Hexadecimal value
#pragma config BOOTROM_SECCFGLOCK = SET
#pragma config BOOTROM_DICEEN = CLEAR
#pragma config NVMCTRL_BCWEN = SET
#pragma config NVMCTRL_BCREN = SET

// BOCOR_WORD_2
#pragma config BOOTROM_BOCORCRC = 0xC0349ACC // Enter Hexadecimal value

// BOCOR_WORD_4
#pragma config BOOTROM_CEKEY0_0 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_5
#pragma config BOOTROM_CEKEY0_1 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_6
#pragma config BOOTROM_CEKEY0_2 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_7
#pragma config BOOTROM_CEKEY0_3 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_8
#pragma config BOOTROM_CEKEY1_0 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_9
#pragma config BOOTROM_CEKEY1_1 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_10
#pragma config BOOTROM_CEKEY1_2 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_11
#pragma config BOOTROM_CEKEY1_3 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_12
#pragma config BOOTROM_CEKEY2_0 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_13
#pragma config BOOTROM_CEKEY2_1 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_14
#pragma config BOOTROM_CEKEY2_2 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_15
#pragma config BOOTROM_CEKEY2_3 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_16
#pragma config BOOTROM_CRCKEY_0 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_17
#pragma config BOOTROM_CRCKEY_1 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_18
#pragma config BOOTROM_CRCKEY_2 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_19
#pragma config BOOTROM_CRCKEY_3 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_20
#pragma config BOOTROM_BOOTKEY_0 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_21
#pragma config BOOTROM_BOOTKEY_1 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_22
#pragma config BOOTROM_BOOTKEY_2 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_23
#pragma config BOOTROM_BOOTKEY_3 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_24
#pragma config BOOTROM_BOOTKEY_4 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_25
#pragma config BOOTROM_BOOTKEY_5 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_26
#pragma config BOOTROM_BOOTKEY_6 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_27
#pragma config BOOTROM_BOOTKEY_7 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_28
#pragma config BOOTROM_UDS_0 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_29
#pragma config BOOTROM_UDS_1 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_30
#pragma config BOOTROM_UDS_2 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_31
#pragma config BOOTROM_UDS_3 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_32
#pragma config BOOTROM_UDS_4 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_33
#pragma config BOOTROM_UDS_5 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_34
#pragma config BOOTROM_UDS_6 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_35
#pragma config BOOTROM_UDS_7 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_56
#pragma config BOOTROM_BOCORHASH_0 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_57
#pragma config BOOTROM_BOCORHASH_1 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_58
#pragma config BOOTROM_BOCORHASH_2 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_59
#pragma config BOOTROM_BOCORHASH_3 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_60
#pragma config BOOTROM_BOCORHASH_4 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_61
#pragma config BOOTROM_BOCORHASH_5 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_62
#pragma config BOOTROM_BOCORHASH_6 = 0xFFFFFFFF // Enter Hexadecimal value

// BOCOR_WORD_63
#pragma config BOOTROM_BOCORHASH_7 = 0xFFFFFFFF // Enter Hexadecimal value

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>

void init_system(void){
    
    NVMCTRL_REGS->NVMCTRL_CTRLB = NVMCTRL_CTRLB_RWS(3U);

    init_OSCCTRL();
    init_GCLK();
    init_ports();
}

void init_OSCCTRL(){
    //Configure Oscillator controller to run at 16MHz using OSC16M

    OSCCTRL_REGS->OSCCTRL_OSC16MCTRL = OSCCTRL_OSC16MCTRL_RUNSTDBY_Msk | OSCCTRL_OSC16MCTRL_FSEL_16MHZ | OSCCTRL_OSC16MCTRL_ENABLE_Msk;

    //Wait for OSC16M ready state
    while((OSCCTRL_REGS->OSCCTRL_STATUS & OSCCTRL_STATUS_OSC16MRDY_Msk) != OSCCTRL_STATUS_OSC16MRDY_Msk);
}

void init_GCLK(){
    //Configure GCLK0 to run at 48MHz using the OSC16M for the main clock
    GCLK_REGS->GCLK_GENCTRL[0] = GCLK_GENCTRL_DIV(1UL) | GCLK_GENCTRL_SRC(5UL) | GCLK_GENCTRL_GENEN_Msk;
    
    //Wait for synchronization to complete
    while((GCLK_REGS->GCLK_SYNCBUSY & GCLK_SYNCBUSY_GENCTRL0_Msk) == GCLK_SYNCBUSY_GENCTRL0_Msk);

    //Enable peripheral channel for SERCOM1 on GCLK0
    GCLK_REGS->GCLK_PCHCTRL[18] = GCLK_PCHCTRL_WRTLOCK(0x0U) | GCLK_PCHCTRL_CHEN(0x0U) | GCLK_PCHCTRL_CHEN_Msk;

    //wait for synchronization
    while((GCLK_REGS->GCLK_PCHCTRL[18] & GCLK_PCHCTRL_CHEN_Msk) != GCLK_PCHCTRL_CHEN_Msk);

    //Enable peripheral channel for SERCOM3 on GCLK0
    GCLK_REGS->GCLK_PCHCTRL[20] = GCLK_PCHCTRL_WRTLOCK(0x0U) | GCLK_PCHCTRL_CHEN(0x0U) | GCLK_PCHCTRL_CHEN_Msk;

    //wait for synchronization
    while((GCLK_REGS->GCLK_PCHCTRL[20] & GCLK_PCHCTRL_CHEN_Msk) != GCLK_PCHCTRL_CHEN_Msk);

}

void init_ports(){
    //Configure Ports (BaseAddress: 0x41000000)
    PORT_REGS->GROUP[0].PORT_DIR = (LED_PIN | SPI_SCK | SPI_SDO | SPI_SS );     // Set LED, USART TX, SPI SCK, SPI SDO, and SPI SS pins as outputs
    PORT_REGS->GROUP[1].PORT_DIR = (USART_TX_PIN);     // Set LED, USART TX, SPI SCK, SPI SDO, and SPI SS pins as outputs
    //PORT_REGS->GROUP[0].PORT_DIR = (uint32_t)USART_TX_PIN;     // Set LED pin as an output
    //PORT_REGS->GROUP[0].PORT_OUT = SW_PIN; // Set switch pin high (pull-up)
    PORT_REGS->GROUP[1].PORT_PINCFG[8] = (uint8_t)0x1UL; //Configure port control to enable the peripheral multiplexer on PB8 [USART_TX_PIN]
    PORT_REGS->GROUP[1].PORT_PINCFG[9] = (uint8_t)0x1UL; //Configure port control to enable the peripheral multiplexer on PB9 [USART_RX_PIN]
    PORT_REGS->GROUP[0].PORT_PINCFG[11] = (uint8_t)0x1UL; //Configure port control to enable the peripheral multiplexer on PA11 [SPI_SDI]
    PORT_REGS->GROUP[0].PORT_PINCFG[8] = (uint8_t)0x1UL; //Configure port control to enable the peripheral multiplexer on PA08 [SPI_SDO]
    PORT_REGS->GROUP[0].PORT_PINCFG[9] = (uint8_t)0x1UL; //Configure port control to enable the peripheral multiplexer on PA09 [SPI_SCK]
    PORT_REGS->GROUP[0].PORT_PINCFG[10] = (uint8_t)0x1UL; //Configure port control to enable the peripheral multiplexer on PA10 [SPI_SS]
    PORT_REGS->GROUP[0].PORT_PINCFG[23] = (uint8_t)0x6UL; // Configure port control for switch, enable internal pullup, enable input buffer 
    PORT_REGS->GROUP[0].PORT_PINCFG[15] = (uint8_t)0x0UL; // Configure port control for LED, no pullup, enable output buffer
    //Figure out how to configure the ports for peripheral operation
    PORT_REGS->GROUP[1].PORT_PMUX[4] = (uint8_t)0x33UL; //Configure PB8 and PB9 for peripheral function D (SERCOM_ALT)
    PORT_REGS->GROUP[0].PORT_PMUX[4] = (uint8_t)0x22;   //Configure PA8 and PA9 for peripheral function C (SERCOM)
    PORT_REGS->GROUP[0].PORT_PMUX[5] = (uint8_t)0x22;   //Configure PA10 and PA11 for peripheral function C (SERCOM)
    //PORT_REGS->GROUP[0].PORT_WRCONFIG =  PORT_WRCONFIG_HWSEL(0x0UL) | PORT_WRCONFIG_WRPINCFG(0x1UL) | PORT_WRCONFIG_WRPMUX(0x2UL) | PORT_WRCONFIG_PMUXEN(0x1UL) | PORT_WRCONFIG_PINMASK(0x8UL); 
    PORT_REGS->GROUP[0].PORT_OUTSET |= LED_PIN; // Turn off LED (active low)
}

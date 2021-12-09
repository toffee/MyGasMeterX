#ifndef PINS_H_
#define PINS_H_

#include "stdpins.h"

// PB0 = n/c

// PB1 = NRF24L01+ CE
// PB2 = NRF24L01+ CS
// PB3 = NRF24L01+ MOSI
// PB4 = NRF24L01+ MISO
// PB5 = NRF24L01+ SCK

// PB6, PB7 = Xtal 32.768 KHz

#define MIRROR          C,0,ACTIVE_HIGH     // mirror state of switch
#define AWAKE           C,1,ACTIVE_HIGH     // set HIGH while awake

#define LUX_SIGNAL		C,2,ACTIVE_HIGH     // analog input from light sensor
#define LUX_POWER		C,3,ACTIVE_HIGH     // power to light sensor

// PC4, PC5 = I2C

// PD2 = INT0 = n/c 

// magnet switch for gas meter connected between PD3=INT1 and PD4
#define MAGNET			D,3,ACTIVE_LOW      // LOW(TRUE) when closed
#define MAGNET_RET      D,4,ACTIVE_HIGH     // return pin for contact (GND)

#define DEBUG_ENABLE  _UART_RX  // H if FTDI connected, else L via 1 MOhm pulldown

#endif // PINS_H

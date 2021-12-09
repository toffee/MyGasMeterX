#ifndef __MYSENSORS_CONF_H
#define __MYSENSORS_CONF_H

// Enable debug prints
#define MY_SPLASH_SCREEN_DISABLED
//
//#define MY_DEBUG
//#define MY_DEBUG_VERBOSE_RF24

// Enable and select radio type attached
#define MY_RADIO_RF24
//#define MY_RADIO_RFM69

#define MY_BAUD_RATE 9600uL

#ifndef MY_NODE_ID
 #define MY_NODE_ID 199
 #error "must define MY_NODE_ID"
#endif

#endif // __MYSENSORS_CONF_H

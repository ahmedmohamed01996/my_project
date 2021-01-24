/*
 * UART_CONFIG.h
 *
 * Created: 19/12/2020 02:44:01 ص
 *  Author: magdy
 */ 


#ifndef UART_CONFIG_H_
#define UART_CONFIG_H_

#include "CPU_CONFIGURATION.h"

#define BAUD 9600
#define Fosc 8000000UL

#define UBRR_VALUE  (((Fosc)/(16UL*BAUD)) - 1)


#endif /* UART_CONFIG_H_ */
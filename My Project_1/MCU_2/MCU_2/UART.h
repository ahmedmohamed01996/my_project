/*
 * UART.h
 *
 * Created: 19/12/2020 02:43:34 ص
 *  Author: magdy
 */ 


#ifndef UART_H_
#define UART_H_
#include "UART_CONFIG.h"

void UART_INIT(void);
void UART_Transmit(Uint8t Data);
void UART_Receive(Uint8t * Receiver);
Uint8t UART_Receive_Byte(void);
void UART_Transmit_Str(Uint8t* Str_Tx);
void UART_Receive_Str(Uint8t* Ptr);
Uint8t Compare_Str(Uint8t arr1[10] , Uint8t arr2[10]);

#endif /* UART_H_ */
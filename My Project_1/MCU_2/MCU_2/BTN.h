/*
 * BTN.h
 *
 * Created: 17/11/2020 04:49:11 ص
 *  Author: magdy
 */ 


#ifndef BTN_H_
#define BTN_H_


#include "CPU_CONFIGURATION.h"

//BTN 0
void BTN0_Init(void);
Uint8t BTN0_READ(void);
void BTN0_Toggle(void);
//BTN 1
void BTN1_Init(void);
Uint8t BTN1_READ(void);
void BTN1_Toggle(void);
//BTN 2
void BTN2_Init(void);
Uint8t BTN2_READ(void);
void BTN2_Toggle(void);


#endif /* BTN_H_ */
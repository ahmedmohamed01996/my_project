/*
 * SEV_SEG.h
 *
 * Created: 11/13/2020 10:58:49 PM
 *  Author: Smiler Book
 */ 


#ifndef SEV_SEG_H_
#define SEV_SEG_H_

#include "CPU_CONFIGURATION.h"


void SEV_SEG_Init(void);
void SEV_SEG_EN1(void);
void SEV_SEG_EN2(void);
void SEV_SEG_DS1(void);
void SEV_SEG_DS2(void);
void SEV_SEG_Display(Uint8t Data);

#endif /* SEV_SEG_H_ */
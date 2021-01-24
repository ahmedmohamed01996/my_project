/*
 * TIMER0.h
 *
 * Created: 04/12/2020 08:37:59 م
 *  Author: magdy
 */ 


#ifndef TIMER0_H_
#define TIMER0_H_

#include "TIMER0_CONFIG.h"
#include "ADC.h"

void TIMER0_INIT(void);
void TIMER0_START(void);
void TIMER0_STOP(void);
void TIMER0_SET_DELAY(Uint32t Delay_ms, Uint8t TOP);

void TIMER0_FASTPWM_INIT(void);
void TIMER0_FASTPWM_SetDutyCycle(Uint8t Duty_Cycle);
void TIMER0_FASTPWM_START(void);
void TIMER0_FASTPWM_STOP(void);



#endif /* TIMER0_H_ */
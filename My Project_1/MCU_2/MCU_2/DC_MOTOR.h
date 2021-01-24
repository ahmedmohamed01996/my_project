/*
 * DC_MOTOR.h
 *
 * Created: 12/12/2020 08:17:04 م
 *  Author: magdy
 */ 


#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include "CPU_CONFIGURATION.h"

void MOTORA_INIT(void);
void MOTORA_EN1(void);
void MOTORA_DS1(void);

void MOTORB_INIT(void);
void MOTORB_EN2(void);
void MOTORB_DS2(void);


#endif /* DC_MOTOR_H_ */
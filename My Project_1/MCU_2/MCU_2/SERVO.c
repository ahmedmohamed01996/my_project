/*
 * SERVO.c
 *
 * Created: 19/11/2020 11:58:58 م
 *  Author: magdy
 */ 

#include <avr/io.h>
#include "SERVO.h"

void SERVO_INIT()
{
	SET_BIT(DDRD,7);
}
 void SERVO_ROT()
 {
	 SET_BIT(PORTD,7);
	 _delay_ms(1000);
 }
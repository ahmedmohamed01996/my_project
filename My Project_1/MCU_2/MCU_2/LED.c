/*
 * CFile1.c
 *
 * Created: 07/11/2020 7:19:50 PM
 *  Author: MM
 */
#include <avr/io.h>
#include "LED.h"                    
//LED 0
void LED0_Init(void){
	SET_BIT(DDRC,2);	
}
void LED0_ON(void){
	SET_BIT(PORTC,2);
	
}
void LED0_OFF(void){
	CLR_BIT(PORTC,2);
}
void LED0_Toggle(void)
{
	TGL_BIT(PORTC,2);
}
//LED 1
void LED1_Init(void){
	SET_BIT(DDRC,7);
}
void LED1_ON(void){
	SET_BIT(PORTC,7);
	
}
void LED1_OFF(void){
	CLR_BIT(PORTC,7);
}
void LED1_Toggle(void)
{
	TGL_BIT(PORTC,7);
}

// LED 2
void LED2_Init(void){
	SET_BIT(DDRD,3);
}
void LED2_ON(void){
	SET_BIT(PORTD,3);
	
}
void LED2_OFF(void){
	CLR_BIT(PORTD,3);
}
void LED2_Toggle(void)
{
	TGL_BIT(PORTD,3);
}
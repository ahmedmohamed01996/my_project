/*
 * BTN.c
 *
 * Created: 17/11/2020 04:49:33 ص
 *  Author: magdy
 */ 
#include <avr/io.h>
#include "BTN.h"

//BTN 0
void BTN0_Init(void){
	CLR_BIT(DDRB,0);
}
Uint8t BTN0_READ(void){       
	Uint8t BTNX ;  
	GET_BIT(PINB,0);
	while (!BTNX)
	{
		return BTNX;
	}	
}

void BTN0_Toggle(void)
{
	TGL_BIT(PORTB,0);
}
//BTN 1
void BTN1_Init(void){
	CLR_BIT(DDRB,4);
}
Uint8t BTN1_READ(void){
	Uint8t BTNX ;  
	GET_BIT(PINB,4);
	while (!BTNX)
	{
		return BTNX;
	}	
}

void BTN1_Toggle(void)
{
	TGL_BIT(PORTB,4);
}

// BTN 2
void BTN2_Init(void){
	CLR_BIT(DDRD,2);
}
Uint8t BTN2_READ(void){
	Uint8t BTNX ;  
	GET_BIT(PIND,2);
	while (!BTNX)
	{
		return BTNX;
	}
}

void BTN2_Toggle(void)
{
	TGL_BIT(PORTD,2);
}
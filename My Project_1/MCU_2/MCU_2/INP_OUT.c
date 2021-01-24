/*
 * INP_OUT.c
 *
 * Created: 12/11/2020 8:52:06 PM
 *  Author: MM
 */ 
#include "INP_OUT.h"
//******BUZZER*******
void Buzzer_Init(void)
{
	SET_BIT(DDRA,3);
}
void Buzzer_ON(void)
{
	SET_BIT(PORTA,3);
}
void Buzzer_OFF(void)
{
	CLR_BIT(PORTA,3);
}
void Buzzer_Toggle(void)
{
	TGL_BIT(PORTA,3);
}
//******RELAY******
void Relay_Init(void)
{
	SET_BIT(DDRA,2);
}
void Relay_ON(void)
{
	SET_BIT(PORTA,2);
}
void Relay_OFF(void)
{
	CLR_BIT(PORTA,2);
}
void Relay_Toggle(void)
{
	TGL_BIT(PORTA,2);
}
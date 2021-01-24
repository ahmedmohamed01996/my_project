/*
* SEV_SEG.c
*
* Created: 11/13/2020 10:58:31 PM
*  Author: Smiler Book
*/
#include <avr/io.h>
#include "SEV_SEG.h"


void SEV_SEG_Init(void)
{
	DIO_SetPin_Direction(DIO_PORTA,DIO_PIN4,DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(DIO_PORTA,DIO_PIN5,DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(DIO_PORTA,DIO_PIN6,DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(DIO_PORTA,DIO_PIN7,DIO_PIN_OUTPUT);
	
	DIO_SetPin_Direction(DIO_PORTB, DIO_PIN1, DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(DIO_PORTB, DIO_PIN2, DIO_PIN_OUTPUT);
}

void SEV_SEG_EN1(void)
{
	DIO_SetPin_Value(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
}

void SEV_SEG_EN2(void)
{
	DIO_SetPin_Value(DIO_PORTB,DIO_PIN2,DIO_PIN_HIGH);
}

void SEV_SEG_DS1(void)
{
	DIO_SetPin_Value(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
}

void SEV_SEG_DS2(void)
{
	DIO_SetPin_Value(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
}

void SEV_SEG_Display(Uint8t Data)
{
	
	Uint8t Data0 = Data %10; //RIGHT SEV_SEG
	Uint8t Data1 = Data /10; //LEFT SV_SEG
	SEV_SEG_EN1();
	SEV_SEG_DS2();
	//	GET_HIGH_Nibble(PORTA);
	PORTA = (Data0 << 4) | (PORTA & 0x0F);
	_delay_ms(10);
	SEV_SEG_DS1();
	SEV_SEG_EN2();
	//	GET_HIGH_Nibble(PORTA);
	PORTA = (Data1 << 4) | (PORTA & 0x0F);
	_delay_ms(10);
	
	
	
}

 
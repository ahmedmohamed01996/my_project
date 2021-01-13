﻿/*
 * DC_MOTOR.c
 *
 * Created: 12/12/2020 08:17:27 م
 *  Author: magdy
 */ 
#include "DC_MOTOR.h"
#include "BTN.h"

void MOTORA_INIT(void)
{
	DIO_SetPin_Direction(DIO_PORTC,DIO_PIN3,DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(DIO_PORTC,DIO_PIN4,DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(DIO_PORTC,DIO_PIN5,DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(DIO_PORTC,DIO_PIN6,DIO_PIN_OUTPUT);
	
	DIO_SetPin_Direction(DIO_PORTD, DIO_PIN4, DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(DIO_PORTD, DIO_PIN5, DIO_PIN_OUTPUT);
}
void MOTORA_EN1(void)
{
	
	SET_BIT(PORTD, PD4);
	DIO_SetPin_Value(DIO_PORTC,DIO_PIN3,DIO_PIN_HIGH);
	DIO_SetPin_Value(DIO_PORTC,DIO_PIN4,DIO_PIN_LOW);
	
	//DIO_SetPin_Value(DIO_PORTD,DIO_PIN4,DIO_PIN_HIGH);
	
}
void MOTORA_DS1(void)
{
	CLR_BIT(PORTD, PD4);
	DIO_SetPin_Value(DIO_PORTC,DIO_PIN3,DIO_PIN_LOW);
	DIO_SetPin_Value(DIO_PORTC,DIO_PIN4,DIO_PIN_LOW);
}

void MOTORB_INIT(void)
{
	DIO_SetPin_Direction(DIO_PORTC,DIO_PIN3,DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(DIO_PORTC,DIO_PIN4,DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(DIO_PORTC,DIO_PIN5,DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(DIO_PORTC,DIO_PIN6,DIO_PIN_OUTPUT);
	
	DIO_SetPin_Direction(DIO_PORTD, DIO_PIN4, DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(DIO_PORTD, DIO_PIN5, DIO_PIN_OUTPUT);
}

void MOTORB_EN2(void)
{
	SET_BIT(PORTD, PD5);
	DIO_SetPin_Value(DIO_PORTC,DIO_PIN5,DIO_PIN_HIGH);
	DIO_SetPin_Value(DIO_PORTC,DIO_PIN6,DIO_PIN_LOW);

}
void MOTORB_DS2(void)
{
	CLR_BIT(PORTD, PD5);
	DIO_SetPin_Value(DIO_PORTC,DIO_PIN5,DIO_PIN_LOW);
	DIO_SetPin_Value(DIO_PORTC,DIO_PIN6,DIO_PIN_LOW);
}


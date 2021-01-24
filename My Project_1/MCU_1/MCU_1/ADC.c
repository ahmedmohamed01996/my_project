/*
 * ADC.c
 *
 * Created: 21/11/2020 10:06:57 م
 *  Author: magdy
 */ 
#include "ADC.h"

void ADC_Init(void)
{
	//define Vref for ADC
	SET_BIT(ADMUX, REFS1);
    CLR_BIT(ADMUX, REFS0);
	//CLR_BIT(ADMUX, REFS0);  //voltage reference from AVCC
	//RIGHT adjust
	CLR_BIT(ADMUX, ADLAR);
	//choose channel
	SET_BIT(ADMUX, MUX0);
	CLR_BIT(ADMUX, MUX1);
	CLR_BIT(ADMUX, MUX2);
	CLR_BIT(ADMUX, MUX3);
	CLR_BIT(ADMUX, MUX4);
	//auto trigger mode
	SET_BIT(ADCSRA, ADATE);
	// define prescalOr
	SET_BIT(ADCSRA, ADPS0);
	SET_BIT(ADCSRA, ADPS1);
	SET_BIT(ADCSRA, ADPS2);

	// ENABLE ADC
	SET_BIT(ADCSRA, ADEN);	
    
}


Uint16t ADC_READ(void)
{
	Uint16t Var;
	//start conversion
	SET_BIT(ADCSRA, ADSC);
	// wait and check flag is 1
	while(GET_BIT(ADCSRA, ADIF) != 1);
	//return value
	Var = ADC_DATA;
	return Var;
	
}


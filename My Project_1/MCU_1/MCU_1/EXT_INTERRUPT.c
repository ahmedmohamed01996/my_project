/*
 * EXT_INTERRUPT.c
 *
 * Created: 02/12/2020 08:28:54 ص
 *  Author: magdy
 */ 

#include "EXT_INTERRUPT.h"

void EXT_INT0_INIT(void)
{
	/*step_1 disable global interrupt*/
	cli();
	//CLR_BIT(SREG, 7);
	/*define logic firing interrupt*/
	CLR_BIT(MCUCR, ISC00);
	SET_BIT(MCUCR, ISC01);
	/*enable peripheral interrupt*/
	SET_BIT(GICR, 6);
	/*enable global interrupt*/
	sei();
	//SET_BIT(SREG, 7);
	LED0_Init();
	
}
ISR(INT0_vect)
{
	LED0_OFF();
	Buzzer_OFF();
	TIMER0_STOP();
}
void EXT_INT1_INIT(void)
{
	
}
void EXT_INT2_INIT(void)
{
	
}

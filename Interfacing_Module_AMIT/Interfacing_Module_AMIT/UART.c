/*
 * UART.c
 *
 * Created: 19/12/2020 02:44:21 ص
 *  Author: magdy
 */ 

#include "UART.h"

void UART_INIT(void)
{
	
	UBRRL = (Uint8t)(UBRR_VALUE);         //set BAUD RATE
	UBRRH = (Uint8t)(UBRR_VALUE>>8);       // shift the register right by 8 bits

	
	SET_BIT(UCSRB,  TXEN);       //Enable Transmit    
	SET_BIT(UCSRB,  RXEN);       //Enable Receiver
	
	SET_BIT(UCSRC, URSEL);      //selects between accessing the UCSRC or the UBRRH Register
	//SET_BIT(UCSRC, USBS);      //Stop Bit Select(2-bits)
	
	SET_BIT(UCSRC,  UCSZ0);      //frame with 9 bits data
	SET_BIT(UCSRC,  UCSZ1);
	CLR_BIT(UCSRB,  UCSZ2);
	
	CLR_BIT(UCSRC,  UPM0);   CLR_BIT(UCSRC, UPM1);    //Parity Mode (Disabled)
	CLR_BIT(UCSRC,  UMSEL);                         // USART Mode Select (Asynchronous Operation)
	
	DIO_SetPin_Direction(DIO_PORTD,DIO_PIN0,DIO_PIN_INPUT);    //RX - INPUT
	DIO_SetPin_Direction(DIO_PORTD,DIO_PIN1,DIO_PIN_OUTPUT);	//TX - OUTPUT											  
	CLR_BIT(DDRD, PD0);
	SET_BIT(DDRD, PD1);												  
}
void UART_Transmit(Uint8t Data)
{
	
	//DIO_SetPin_Value(DIO_PORTD,DIO_PIN1,DIO_PIN_LOW);
	while( !( UCSRA & (1<<UDRE)));         //transmit buffer (UDR) is ready to receive new data. If UDRE is one
	UDR = Data;
	//while(GET_BIT(UCSRA, TXC) !=1);     //Pooling mode	
}
Uint8t UART_Receive_Byte(void)
{
	// Wait for byte to be received
	while(!(UCSRA & (1<<RXC)) );
	// Return received data
	return UDR;
}
void UART_Receive(Uint8t * Receiver)
{
	GET_BIT(PIND, 0);
	while (GET_BIT(UCSRA, RXC) != 1);/*Polling Mode*/
	*Receiver = UDR;
	
}
void UART_Transmit_Str(Uint8t* Str_Tx)
{
	while(*Str_Tx != '\0')
	{
		UART_Transmit_Str(*Str_Tx);
		_delay_ms(1);
		Str_Tx ++;
	}
	
}
void UART_Receive_Str(Uint8t* Ptr)
{
	Uint8t i = 0;
	Ptr[i] = UART_Receive_Byte();
	while (Ptr[i] != '#')
	{
		i++;
		Ptr[i]=UART_Receive_Byte();
		
	}
	Ptr[i]= '\0';
}
Uint8t Compare_Str(Uint8t arr1[10] , Uint8t arr2[10])
{
	Uint8t i=0;
	Uint8t flag=0;
	while((arr2[i] !='\0'))
	{
		if (arr1[i] == arr2[i])
		{
			flag=1;
		}
			else
			{
				flag=0;
			}
			i++;
		}
		return flag;
}


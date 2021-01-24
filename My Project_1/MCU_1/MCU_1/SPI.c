/*
* SPI.c
*
* Created: 12/15/2020 5:16:10 PM 
*/

#include "SPI.h"

void SPI_InitMaster()
{
	DDRB |= (1<<PB4)|(1<<PB5)|(1<<PB7);
	SPCR |= (1<<SPE)|(1<<MSTR);
}

void SPI_InitSlave()
{
	DDRB |= (1<<PB6);
	SPCR |= (1<<SPE);
}

void SPI_SendByte(Uint8t data)
{
	SPDR = data;
	while(CLR_BIT(SPSR,SPIF));
}

Uint8t SPI_ReceiveByte()
{
	while(CLR_BIT(SPSR,SPIF));
	return SPDR;
}

void SPI_SendString(Uint8t *str)
{
	while(*str)
	{
		SPI_SendByte(*str);
		str++;
	}
}

void SPI_ReceiveString(Uint8t *str)
{
	Uint8t i = 0;
	str[i] = SPI_ReceiveByte();
	while(str[i] != '#')
	{
		i++;
		str[i] = SPI_ReceiveByte();
	}
	str[i] = '\0';
}
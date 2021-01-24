/*
* ATMEGA32_REGISTERS.h
*
* Created: 11/1/2020 9:33:05 PM
*  Author: karim
*/


#ifndef ATMEGA32_REGISTERS_H_
#define ATMEGA32_REGISTERS_H_
/************************************** Libraries ***********************************************/
#include "BIT_MATH.h"
#include "STD_TYPES.h"
/************************************** DIO-Registers *******************************************/
#define DDRA  (*(volatile Uint8t*)(0x3A))
#define PORTA (*(volatile Uint8t*)(0x3B))
#define PINA  (*(volatile Uint8t*)(0x39))

#define DDRB  (*(volatile Uint8t*)(0x37))
#define PORTB (*(volatile Uint8t*)(0x38))
#define PINB  (*(volatile Uint8t*)(0x36))

#define DDRC  (*(volatile Uint8t*)(0x34))
#define PORTC (*(volatile Uint8t*)(0x35))
#define PINC  (*(volatile Uint8t*)(0x33))

#define DDRD  (*(volatile Uint8t*)(0x31))
#define PORTD (*(volatile Uint8t*)(0x32))
#define PIND  (*(volatile Uint8t*)(0x30))

/************************************** DAC-Registers *******************************************/

#define ADMUX   (*(volatile Uint8t*) (0X27))
#define ADCSRA  (*(volatile Uint8t*) (0X26))
#define ADCH    (*(volatile Uint8t*) (0X25))
#define ADCL    (*(volatile Uint8t*) (0X24))
#define SFIOR   (*(volatile Uint8t*) (0X50))
#define ADC_DATA (*(volatile Uint16t*) (0X24))

/***************************************Interrupt-Registers**************************************/

#define SREG  (*(volatile Uint8t*) (0X5F))
#define MCUCR (*(volatile Uint8t*) (0X55))
#define GICR  (*(volatile Uint8t*) (0X5B))
#define GIFR  (*(volatile Uint8t*) (0X5A))

/**************************************TIMER0-REGISTERS************************************************/

#define  TCNT0 (*(volatile Uint8t*) (0X52))
#define  TCCR0 (*(volatile Uint8t*) (0X53))
#define  TIMSK (*(volatile Uint8t*) (0X59))
#define  OCR0  (*(volatile Uint8t*) (0X5C))

/**************************************TIMER1-REGISTER*************************************************/

#define   TCCR1A (*(volatile Uint8t*) (0X4F))
#define   TCCR1B (*(volatile Uint8t*) (0X4E))
#define   TCNT1H (*(volatile Uint8t*) (0X4D))
#define   TCNT1L (*(volatile Uint8t*) (0X4C))
#define   OCR1AH (*(volatile Uint8t*) (0X4B))
#define   OCR1AL (*(volatile Uint8t*) (0X4A))
#define   OCR1BH (*(volatile Uint8t*) (0X49))
#define   OCR1BL (*(volatile Uint8t*) (0X48))
#define   ICR1H  (*(volatile Uint8t*) (0X47))
#define   ICR1L  (*(volatile Uint8t*) (0X46))

/**************************************UART_REGISTER***************************************************/

#define    UBRRL  (*(volatile Uint8t*) (0X29))
#define    UBRRH  (*(volatile Uint8t*) (0X40))
#define    UCSRA  (*(volatile Uint8t*) (0X2B))
#define    UCSRB  (*(volatile Uint8t*) (0X2A))
#define    UCSRC  (*(volatile Uint8t*) (0X40))
#define    UDR    (*(volatile Uint8t*) (0X2C))

/*************************************SPI_REGISTER****************************************************/

#define    SPDR  (*(volatile Uint8t*) (0X2F))
#define    SPSR  (*(volatile Uint8t*) (0X2E))
#define    SPCR  (*(volatile Uint8t*) (0X2D))

/**************************************I2C_REGISTER***************************************************/

#define    TWDR  (*(volatile Uint8t*) (0X23))
#define    TWAR  (*(volatile Uint8t*) (0X22))
#define    TWSR  (*(volatile Uint8t*) (0X21))
#define    TWBR  (*(volatile Uint8t*) (0X20))



#endif /* ATMEGA32_REGISTERS_H_ */
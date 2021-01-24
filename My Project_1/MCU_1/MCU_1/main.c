/*
 * MCU_1.c
 *
 * Created: 19/01/2021 06:03:27 ص

 */ 

#include <avr/io.h>
#include "UART.h"
#include "SPI.h"
#include "LCD.h"
#include "DC_MOTOR.h"
#include "LED.h"


int main(void)
{
	
	
	Uint8t y;
	Uint8t arr[10];
	UART_INIT();
	SPI_InitMaster();
   
	while(1)
	{
		
		y = UART_Receive_Byte();
		SPI_SendByte(y);
		_delay_ms(10);
		/*LCD_GOTO_POSITION(1 ,1);
		LCD_Write_Data(x);
		_delay_ms(100);
		
		if (x == '1')
		{
			
			MOTORA_EN1();
			LED1_ON();
		}
		else if (x == '0')
		{
			MOTORA_DS1();
			LED1_OFF();
		}
		else if (x == '2')
		{
			MOTORB_EN2();
			LED0_ON();
		}
		else if (x == '3')
		{
			MOTORB_DS2();
			LED0_OFF();
		}
		else if (x == '4')
		{
			MOTORA_DS1();
			MOTORB_DS2();
			LED0_OFF();
			LED1_OFF();
		}*/
	}
	
	}

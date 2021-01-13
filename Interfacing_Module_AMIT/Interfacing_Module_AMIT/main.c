/*
 * Interfacing_Module_AMIT1.c
 *
 * Created: 13/11/2020 07:36:32 م
 * Author : magdy
 */ 
#include <avr/io.h>
#include "UART.h"
#include "LCD.h"
#include "DC_MOTOR.h"
#include "LED.h"


int main(void)
{
	LED0_Init();
	LED1_Init();
	LCD_Init();
	LCD_Clear();
	LCD_Write_String("Hello!");
	_delay_ms(2000);
	LCD_Clear();
	
	MOTORA_INIT();
	MOTORB_INIT();
	
	Uint8t x;
	Uint8t arr[10];
	UART_INIT();

	
	while(1)
	{
		x = UART_Receive_Byte();
		
		LCD_GOTO_POSITION(1 ,1);
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
		}
	}
	/*
	while(1)
	{
		UART_Receive_Str(arr);
		
		LCD_GOTO_POSITION(1 ,1);
		LCD_Write_String(arr);
		
		if (Compare_Str(arr , "startA"))
		{
			
			MOTORA_EN1();
			LED1_Toggle();
		}
		else if (Compare_Str(arr , "stopA"))
		{
			MOTORA_DS1();
			LED1_OFF();
		}
		else if (Compare_Str(arr , "startB"))
		{
			MOTORB_EN2();
			LED0_Toggle();
		}
		else if (Compare_Str(arr , "stopB"))
		{
			MOTORB_DS2();
			LED0_OFF();
		}
		//else{LED0_ON();}

	}
}*/
}
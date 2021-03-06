﻿/*
 * LCD.h
 *
 * Created: 14/11/2020 09:24:21 م

 */ 


#ifndef LCD_H_
#define LCD_H_

#include "CPU_CONFIGURATION.h"
#include "DIO.h"

void LCD_Init(void);
void LCD_Write_Command(Uint8t command);
void LCD_Write_Data(Uint8t data);
void LCD_Clear(void);
void LCD_Write_String(Uint8t * str);
void LCD_Write_Number(Uint32t Number);

void LCD_GOTO_POSITION(Uint8t ROW , Uint8t COL);    

#endif /* LCD_H_ */
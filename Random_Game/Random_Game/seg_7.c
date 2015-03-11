﻿/*
 * seg_7.c
 *
 * Created: 29.11.2013 20:54:35
 *  Author: Администратор
 */ 


#include "seg_7.h"
//---------------------------------------------------------------------------------------
unsigned char dn=0;
unsigned int dig_shn=0;
unsigned int led_num=8888; //переменная для дисплея
//---------------------------------------------------------------------------------------
//Таблица цифр для семисегментника
unsigned char led_table[10]={0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};
//---------------------------------------------------------------------------------------



//---------------------------------------------------------------------------------------
void dig_show(void)
{ //Здесь отображаем разряды
	//SG_PORT|=0xf; //Не показываем ни чего
	SG_PORT&=0x0; //Не показываем ни чего
	if (dn==0)
	{
		dig_shn=led_num;     //Если первый разряд обновляем переменную
	};
	LD_PORT=led_table[dig_shn%10]; //Извлекаем разряд
	if (dn==2)
	{
		LD_PORT|=0x80;             //Если третий разряд кажем точку
	};
	dig_shn/=10; //Сдвигаем разряд вправо
	//SG_PORT&=~(1<<dn); //Показываем разряд
	SG_PORT|=(1<<dn); //Показываем разряд
	dn++;
	if (dn>3)
	{
		dn=0;
	};
};
//---------------------------------------------------------------------------------------
void Set_led_num(unsigned int data)
{
	led_num = data;
};
//---------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------
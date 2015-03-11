/*
* set_rand_diodes.c
*
* Created: 10.06.2013 22:35:40
*  Author: Администратор
*/
#include "set_rand_diodes.h"
//---------------------------------------------------------------------------------------
void set_rand_diodes(unsigned char rand_one,unsigned char rand_two,unsigned char but_one,unsigned char but_two)
{
	LED1_OFF;
	LED2_OFF;
	LED3_OFF;
	LED4_OFF;
	LED5_OFF;
	LED6_OFF;
	LED7_OFF;
	LED8_OFF;
	LED9_OFF;
	LED10_OFF;
	LED11_OFF;
	LED12_OFF;
	if (((rand_one == but_one) != 0x00)|((rand_one == but_two) != 0x00))//порядок не важливий
	//(rand_one == but_one != 0x00) порядок важливий
	{
		switch(rand_one)
		{
			case 1:
			{
				LED1_ON;
			};break;
			case 2:
			{
				LED2_ON;
			};break;
			case 3:
			{
				LED3_ON;
			};break;
			case 4:
			{
				LED4_ON;
			};break;
			case 5:
			{
				LED5_ON;
			};break;
			case 6:
			{
				LED6_ON;
			};break;
			case 7:
			{
				LED7_ON;
			};break;
			case 8:
			{
				LED8_ON;
			};break;
			case 9:
			{
				LED9_ON;
			};break;
			case 10:
			{
				LED10_ON;
			};break;
			case 11:
			{
				LED11_ON;
			};break;
			case 12:
			{
				LED12_ON;
			};break;
		};
	}
	else
	{
	};
	if (((rand_two == but_two) != 0x00)|((rand_two == but_one) != 0x00))//порядок не важливий
	//(rand_two == but_two != 0x00) порядок важливий
	{
		switch(rand_two)
		{
			case 1:
			{
				LED1_ON;
			};break;
			case 2:
			{
				LED2_ON;
			};break;
			case 3:
			{
				LED3_ON;
			};break;
			case 4:
			{
				LED4_ON;
			};break;
			case 5:
			{
				LED5_ON;
			};break;
			case 6:
			{
				LED6_ON;
			};break;
			case 7:
			{
				LED7_ON;
			};break;
			case 8:
			{
				LED8_ON;
			};break;
			case 9:
			{
				LED9_ON;
			};break;
			case 10:
			{
				LED10_ON;
			};break;
			case 11:
			{
				LED11_ON;
			};break;
			case 12:
			{
				LED12_ON;
			};break;
		};
	}
	else
	{
	};
};
//---------------------------------------------------------------------------------------
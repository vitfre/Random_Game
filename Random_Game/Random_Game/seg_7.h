﻿/*
 * seg_7.h
 *
 * Created: 29.11.2013 20:54:42
 *  Author: Администратор
 */ 


#ifndef SEG_7_H_
#define SEG_7_H_

#include <avr/io.h>

//---------------------------------------------------------------------------------------
#define LD_PORT			PORTD	//Выход сегментов
#define SG_PORT			PORTE	//Выход розрядов


//---------------------------------------------------------------------------------------
void dig_show(void);
//---------------------------------------------------------------------------------------
void Set_led_num(unsigned int data);
//---------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------



#endif /* SEG_7_H_ */
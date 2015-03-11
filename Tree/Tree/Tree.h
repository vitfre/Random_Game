/*
 * Random_Game.h
 *
 * Created: 10.06.2013 22:35:40
 *  Author: Администратор
 */

 #ifndef F_CPU
 #define F_CPU 16000000UL // or whatever may be your frequency
 #endif

#ifndef TREE_H_
#define TREE_H_





#endif /* TREE_H_ */


 #ifndef F_CPU
 #define F_CPU 16000000UL // or whatever may be your frequency
 #endif

 #include <avr/io.h>
 #include <avr/interrupt.h>
 #include <util/delay.h>

#include "buart.h"

#include <avr/eeprom.h>

//#include <stdio.h>
//---------------------------------------------------------------------------------------
#define SetBit(x,y)		(x|=(1<<y))
#define ClrBit(x,y)		(x&=~(1<<y))
#define BitVal(x,y)		(((x)>>(y))&1)
#define BitFlp(x,y)		((x)^(1<<(y)))
//---------------------------------------------------------------------------------------
unsigned char red=0x00,green=0x55,blue=0xAA,tmr=0x00;
unsigned char r=1,g=1,b=1;
unsigned char butt=0,tmr_butt=0x00;
//---------------------------------------------------------------------------------------
#define RED_ON			(PORTB&=~(1<<0))	
#define RED_OF			(PORTB|=(1<<0))
#define GRN_ON			(PORTB&=~(1<<1))
#define GRN_OF			(PORTB|=(1<<1))
#define BLU_ON			(PORTB&=~(1<<2))
#define BLU_OF			(PORTB|=(1<<2))
//---------------------------------------------------------------------------------------
#define BUTTON			(((PIND)>>(2))&1)
//---------------------------------------------------------------------------------------
#define TE				(PORTD|=(1<<3))
#define TD				(PORTD&=~(1<<3))
//---------------------------------------------------------------------------------------
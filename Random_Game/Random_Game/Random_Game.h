/*
 * Random_Game.h
 *
 * Created: 10.06.2013 22:35:40
 *  Author: Администратор
 */

 #ifndef F_CPU
 #define F_CPU 16000000UL // or whatever may be your frequency
 #endif

#ifndef RANDOM_GAME_H_
#define RANDOM_GAME_H_





#endif /* RANDOM_GAME_H_ */


#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "init_mcu.h"
#include "scan_but.h"
#include "set_rand_diodes.h"
#include "get_rand_1_12.h"

#include "seg_7.h"

#include "buart.h"

#include <avr/eeprom.h>

//#include <stdio.h>
//---------------------------------------------------------------------------------------
#define SetBit(x,y)		(x|=(1<<y))
#define ClrBit(x,y)		(x&=~(1<<y))
#define BitVal(x,y)		(((x)>>(y))&1)
#define BitFlp(x,y)		((x)^(1<<(y)))
//---------------------------------------------------------------------------------------
unsigned int time=0; //переменная для кнопок
//---------------------------------------------------------------------------------------

/*
 * set_rand_diodes.h
 *
 * Created: 10.06.2013 22:35:40
 *  Author: Администратор
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL // or whatever may be your frequency
#endif

#include <avr/io.h>
//---------------------------------------------------------------------------------------
#define LED1_ON			(PORTB|=(1<<4))
#define LED2_ON			(PORTB|=(1<<5))
#define LED3_ON			(PORTB|=(1<<6))
#define LED4_ON			(PORTB|=(1<<7))
#define LED5_ON			(PORTC|=(1<<0))
#define LED6_ON			(PORTC|=(1<<1))
#define LED7_ON			(PORTC|=(1<<2))
#define LED8_ON			(PORTC|=(1<<3))
#define LED9_ON			(PORTC|=(1<<4))
#define LED10_ON		(PORTC|=(1<<5))
#define LED11_ON		(PORTC|=(1<<6))
#define LED12_ON		(PORTC|=(1<<7))
//---------------------------------------------------------------------------------------
#define LED1_OFF		(PORTB&=~(1<<4))
#define LED2_OFF		(PORTB&=~(1<<5))
#define LED3_OFF		(PORTB&=~(1<<6))
#define LED4_OFF		(PORTB&=~(1<<7))
#define LED5_OFF		(PORTC&=~(1<<0))
#define LED6_OFF		(PORTC&=~(1<<1))
#define LED7_OFF		(PORTC&=~(1<<2))
#define LED8_OFF		(PORTC&=~(1<<3))
#define LED9_OFF		(PORTC&=~(1<<4))
#define LED10_OFF		(PORTC&=~(1<<5))
#define LED11_OFF		(PORTC&=~(1<<6))
#define LED12_OFF		(PORTC&=~(1<<7))
//---------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------
void set_rand_diodes(unsigned char rand_one,unsigned char rand_two,unsigned char but_one,unsigned char but_two);
//---------------------------------------------------------------------------------------
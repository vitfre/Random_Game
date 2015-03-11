/*
 * scan_but.h
 *
 * Created: 19.05.2013 22:00:26
 *  Author: vitfre
 */

 #ifndef F_CPU
 #define F_CPU 16000000UL // or whatever may be your frequency
 #endif

#include <avr/io.h>
#include <util/delay.h>
//---------------------------------------------------------------------------------------
#define BUT1			(((PINA)>>(0))&1)
#define BUT2			(((PINA)>>(1))&1)
#define BUT3			(((PINA)>>(2))&1)
#define BUT4			(((PINA)>>(3))&1)
#define BUT5			(((PINA)>>(4))&1)
#define BUT6			(((PINA)>>(5))&1)
#define BUT7			(((PINA)>>(6))&1)
#define BUT8			(((PINA)>>(7))&1)
#define BUT9			(((PINB)>>(0))&1)
#define BUT10			(((PINB)>>(1))&1)
#define BUT11			(((PINB)>>(2))&1)
#define BUT12			(((PINB)>>(3))&1)
//---------------------------------------------------------------------------------------
#define time_dr			0xFA
#define time_zad		0xFA
//---------------------------------------------------------------------------------------
unsigned char scan_but(unsigned char rand_one,unsigned char rand_two);
void wait_but(unsigned char rand);
//---------------------------------------------------------------------------------------
/*
 * init_mcu.h
 *
 * Created: 19.05.2013 22:00:26
 *  Author: vitfre
 */

#ifndef F_CPU
#define F_CPU 16000000UL // or whatever may be your frequency
#endif

#include <avr/io.h>

//---------------------------------------------------------------------------------------
void init_mcu(void);
//---------------------------------------------------------------------------------------
/*
 * get_rand_1_12.h
 *
 * Created: 19.05.2013 22:00:26
 *  Author: vitfre
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL // or whatever may be your frequency
#endif

#include <stdlib.h>
//---------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------
unsigned char get_rand_1_12(unsigned char rand_one, unsigned char old_rand);
//---------------------------------------------------------------------------------------
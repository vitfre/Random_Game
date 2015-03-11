/*
* get_rand_1_12.c
*
* Created: 19.05.2013 22:00:26
*  Author: vitfre
*/
#include "get_rand_1_12.h"
//---------------------------------------------------------------------------------------
unsigned char get_rand_1_12(unsigned char rand_one, unsigned char old_rand)
{
	unsigned char rand_two=0x00;
	do
	{
		rand_two = 1 + rand()/2731;//2521;
	} while ((rand_two==rand_one)|(rand_two==old_rand));
	return rand_two;
};
//---------------------------------------------------------------------------------------
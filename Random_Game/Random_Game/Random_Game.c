/*
* Random_Game.c
*
* Created: 19.05.2013 22:00:26
*  Author: vitfre
*/
#include "Random_Game.h"

//---------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------


ISR (TIMER0_OVF_vect)
{
	dig_show();
	return;
};
//---------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------
int main(void)
{
	// Declare your local variables here
	unsigned char rand_one=0x00,rand_two=0x00,old_rand_one=0x00,old_rand_two=0x00,res_game=0x00;
	unsigned int rand_poli=0x00;
	init_mcu();
	//uart_init();
	// Global enable interrupts
	sei();
	//---------------------------------------------------------------------------------------
	rand_poli =eeprom_read_word((uint16_t*)(0xFD1));
	srand(rand_poli);
	rand_poli++;
	eeprom_write_word((uint16_t*)0xFD1,(uint16_t)rand_poli);
	//---------------------------------------------------------------------------------------
	//---------------------------------------------------------------------------------------
	rand_one = get_rand_1_12(0x00, old_rand_one);
	rand_two = get_rand_1_12(rand_one, old_rand_two);
	old_rand_one=rand_one;
	old_rand_two=rand_two;
	Set_led_num(rand_two + rand_one*100);
	//---------------------------------------------------------------------------------------
	while(1)
	{
		if (res_game==0x11)
		{
			set_rand_diodes(rand_one,rand_two,rand_one,rand_two);//set_rand_diodes(rand_one,rand_two,but_one,but_two);
			_delay_ms(2000);
			set_rand_diodes(0x00,0x00,0x00,0x00);
			res_game = 0x00;
			//---------------------------------------------------------------------------------------
			rand_one = get_rand_1_12(0x00, old_rand_one);
			rand_two = get_rand_1_12(rand_one, old_rand_two);
			old_rand_one=rand_one;
			old_rand_two=rand_two;
			Set_led_num(rand_two + rand_one*100);
			//---------------------------------------------------------------------------------------
		} 
		else
		{
			res_game = scan_but(rand_one,rand_two);
			if (res_game==0x11)
			{
			} 
			else
			{
				res_game = scan_but(rand_two,rand_one);
			};
			wait_but(rand_one);
			wait_but(rand_two);
		};
	};
};
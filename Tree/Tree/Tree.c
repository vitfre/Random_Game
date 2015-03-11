/*
 * Tree.c
 *
 * Created: 09.09.2013 23:37:40
 *  Author: Администратор
 */ 

#include "Tree.h"

//---------------------------------------------------------------------------------------
// Timer 0 overflow interrupt service routine
ISR (TIMER0_OVF_vect)
{
	// Reinitialize Timer 0 value
	TCNT0=0xFE;
	if (tmr<red)
	{
		RED_ON;
	}
	else
	{
		RED_OF;
	};
	if (tmr<green)
	{
		GRN_ON;
	}
	else
	{
		GRN_OF;
	};
	if (tmr<blue)
	{
		BLU_ON;
	}
	else
	{
		BLU_OF;
	};
	tmr++;
	return;
};
//---------------------------------------------------------------------------------------
// Timer 1 overflow interrupt service routine
ISR (TIMER1_OVF_vect)
{
	if (r==1)
	{
		if (butt==0)
		{
			if (red>=0x7E)
			{
				r=0;
			};
		} 
		else
		{
			if (red>=0xFD)
			{
				r=0;
			};
		};
		red++;
	}
	else
	{
		if (red==0x02)
		{
			r=1;
		};
		red--;
	};
	//---------------------------------------------------------------------------------------
	if (g==1)
	{
		if (butt==0)
		{
			if (green>=0x7E)
			{
				g=0;
			};
		}
		else
		{
			if (green>=0xFD)
			{
				g=0;
			};
		};
		green++;
	}
	else
	{
		if (green==0x02)
		{
			g=1;
		};
		green--;
	};
	//---------------------------------------------------------------------------------------
	if (b==1)
	{
		if (butt==0)
		{
			if (blue>=0x7E)
			{
				b=0;
			};
		}
		else
		{
			if (blue>=0xFD)
			{
				b=0;
			};
		};
		blue++;
	}
	else
	{
		if (blue==0x02)
		{
			b=1;
		};
		blue--;
	};
	tmr_butt++;
	if (tmr_butt>250)
	{
		butt=0;
	}
	return;
};
//---------------------------------------------------------------------------------------
// External Interrupt 0 service routine
ISR (INT0_vect)
{
	butt=1;
	tmr_butt=0;
	return;
};
//---------------------------------------------------------------------------------------
void sent_command(void)
{
	TE;
	_delay_us(60);
	//uart_write(0xAA);
	//_delay_us(600);
	uart_write(0xAA);
	_delay_us(600);
	uart_write(0x55);//uart_write(0xAA);
	_delay_us(600);
	uart_write(0xAA);
	_delay_us(600);
	TD;
};

int main(void)
{
	init_mcu();
	uart_init();
	// Global enable interrupts
	sei();
	//---------------------------------------------------------------------------------------
    while(1)
    {
		//TODO:: Please write your application code
		sent_command();
		_delay_ms(25);
    };
};
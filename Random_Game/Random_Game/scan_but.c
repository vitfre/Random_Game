/*
* scan_but.c
*
* Created: 19.05.2013 22:00:26
*  Author: vitfre
*/
#include "scan_but.h"

//---------------------------------------------------------------------------------------
unsigned char get_two_but(unsigned char res,unsigned char rand)
{
	unsigned char tmr_dr=0x00;
	unsigned int tmr_zad=0x00;
	//---------------------------------------------------------------------------------------
	//---------------------------------------------------------------------------------------
	while ((tmr_zad < time_zad)&(res==0x01))
	{
		tmr_zad++;
		_delay_ms(2);
		tmr_dr=0x00;
		switch(rand)
		{
			case 1:
			{
				//---------------------------------------------------------------------------------------
				while ((BUT1 == 0x00)&(tmr_dr < time_dr))
				{
					tmr_dr++;
					_delay_us(80);
				};
				//---------------------------------------------------------------------------------------
			};break;
			case 2:
			{
				//---------------------------------------------------------------------------------------
				while ((BUT2 == 0x00)&(tmr_dr < time_dr))
				{
					tmr_dr++;
					_delay_us(80);
				};
				//---------------------------------------------------------------------------------------
			};break;
			case 3:
			{
				//---------------------------------------------------------------------------------------
				while ((BUT3 == 0x00)&(tmr_dr < time_dr))
				{
					tmr_dr++;
					_delay_us(80);
				};
				//---------------------------------------------------------------------------------------
			};break;
			case 4:
			{
				//---------------------------------------------------------------------------------------
				while ((BUT4 == 0x00)&(tmr_dr < time_dr))
				{
					tmr_dr++;
					_delay_us(80);
				};
				//---------------------------------------------------------------------------------------
			};break;
			case 5:
			{
				//---------------------------------------------------------------------------------------
				while ((BUT5 == 0x00)&(tmr_dr < time_dr))
				{
					tmr_dr++;
					_delay_us(80);
				};
				//---------------------------------------------------------------------------------------
			};break;
			case 6:
			{
				//---------------------------------------------------------------------------------------
				while ((BUT6 == 0x00)&(tmr_dr < time_dr))
				{
					tmr_dr++;
					_delay_us(80);
				};
				//---------------------------------------------------------------------------------------
			};break;
			case 7:
			{
				//---------------------------------------------------------------------------------------
				while ((BUT7 == 0x00)&(tmr_dr < time_dr))
				{
					tmr_dr++;
					_delay_us(80);
				};
				//---------------------------------------------------------------------------------------
			};break;
			case 8:
			{
				//---------------------------------------------------------------------------------------
				while ((BUT8 == 0x00)&(tmr_dr < time_dr))
				{
					tmr_dr++;
					_delay_us(80);
				};
				//---------------------------------------------------------------------------------------
			};break;
			case 9:
			{
				//---------------------------------------------------------------------------------------
				while ((BUT9 == 0x00)&(tmr_dr < time_dr))
				{
					tmr_dr++;
					_delay_us(80);
				};
				//---------------------------------------------------------------------------------------
			};break;
			case 10:
			{
				//---------------------------------------------------------------------------------------
				while ((BUT10 == 0x00)&(tmr_dr < time_dr))
				{
					tmr_dr++;
					_delay_us(80);
				};
				//---------------------------------------------------------------------------------------
			};break;
			case 11:
			{
				//---------------------------------------------------------------------------------------
				while ((BUT11 == 0x00)&(tmr_dr < time_dr))
				{
					tmr_dr++;
					_delay_us(80);
				};
				//---------------------------------------------------------------------------------------
			};break;
			case 12:
			{
				//---------------------------------------------------------------------------------------
				while ((BUT12 == 0x00)&(tmr_dr < time_dr))
				{
					tmr_dr++;
					_delay_us(80);
				};
				//---------------------------------------------------------------------------------------
			};break;
		};
		//---------------------------------------------------------------------------------------
		if (tmr_dr==time_dr)
		{
			res=0x11;
			tmr_zad=time_zad;
		}
		else
		{
			res=0x00;
		};
		//---------------------------------------------------------------------------------------
	};
	//---------------------------------------------------------------------------------------
	//---------------------------------------------------------------------------------------
	return res;
};
//---------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------
unsigned char scan_but(unsigned char rand_one,unsigned char rand_two)
{
	unsigned char res=0x00,tmr_dr=0x00;
	//---------------------------------------------------------------------------------------
	//---------------------------------------------------------------------------------------
	switch(rand_one)
	{
		case 1:
		{
			//---------------------------------------------------------------------------------------
			while ((BUT1 == 0x00)&(tmr_dr < time_dr))
			{
				tmr_dr++;
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 2:
		{
			//---------------------------------------------------------------------------------------
			while ((BUT2 == 0x00)&(tmr_dr < time_dr))
			{
				tmr_dr++;
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 3:
		{
			//---------------------------------------------------------------------------------------
			while ((BUT3 == 0x00)&(tmr_dr < time_dr))
			{
				tmr_dr++;
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 4:
		{
			//---------------------------------------------------------------------------------------
			while ((BUT4 == 0x00)&(tmr_dr < time_dr))
			{
				tmr_dr++;
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 5:
		{
			//---------------------------------------------------------------------------------------
			while ((BUT5 == 0x00)&(tmr_dr < time_dr))
			{
				tmr_dr++;
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 6:
		{
			//---------------------------------------------------------------------------------------
			while ((BUT6 == 0x00)&(tmr_dr < time_dr))
			{
				tmr_dr++;
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 7:
		{
			//---------------------------------------------------------------------------------------
			while ((BUT7 == 0x00)&(tmr_dr < time_dr))
			{
				tmr_dr++;
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 8:
		{
			//---------------------------------------------------------------------------------------
			while ((BUT8 == 0x00)&(tmr_dr < time_dr))
			{
				tmr_dr++;
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 9:
		{
			//---------------------------------------------------------------------------------------
			while ((BUT9 == 0x00)&(tmr_dr < time_dr))
			{
				tmr_dr++;
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 10:
		{
			//---------------------------------------------------------------------------------------
			while ((BUT10 == 0x00)&(tmr_dr < time_dr))
			{
				tmr_dr++;
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 11:
		{
			//---------------------------------------------------------------------------------------
			while ((BUT11 == 0x00)&(tmr_dr < time_dr))
			{
				tmr_dr++;
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 12:
		{
			//---------------------------------------------------------------------------------------
			while ((BUT12 == 0x00)&(tmr_dr < time_dr))
			{
				tmr_dr++;
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
	};
	//---------------------------------------------------------------------------------------
	if (tmr_dr==time_dr)
	{
		res=0x01;
	}
	else
	{
		res=0x00;
	};
	res=get_two_but(res, rand_two);
	//---------------------------------------------------------------------------------------
	return res;
};
//---------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------
void wait_but(unsigned char rand)
//void wait_but(unsigned char rand_one,unsigned char rand_two)
{
	//---------------------------------------------------------------------------------------
	//---------------------------------------------------------------------------------------
	switch(rand)
	{
		case 1:
		{
			//---------------------------------------------------------------------------------------
			while (BUT1 == 0x00)
			{
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 2:
		{
			//---------------------------------------------------------------------------------------
			while (BUT2 == 0x00)
			{
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 3:
		{
			//---------------------------------------------------------------------------------------
			while (BUT3 == 0x00)
			{
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 4:
		{
			//---------------------------------------------------------------------------------------
			while (BUT4 == 0x00)
			{
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 5:
		{
			//---------------------------------------------------------------------------------------
			while (BUT5 == 0x00)
			{
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 6:
		{
			//---------------------------------------------------------------------------------------
			while (BUT6 == 0x00)
			{
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 7:
		{
			//---------------------------------------------------------------------------------------
			while (BUT7 == 0x00)
			{
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 8:
		{
			//---------------------------------------------------------------------------------------
			while (BUT8 == 0x00)
			{
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 9:
		{
			//---------------------------------------------------------------------------------------
			while (BUT9 == 0x00)
			{
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 10:
		{
			//---------------------------------------------------------------------------------------
			while (BUT10 == 0x00)
			{
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 11:
		{
			//---------------------------------------------------------------------------------------
			while (BUT11 == 0x00)
			{
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
		case 12:
		{
			//---------------------------------------------------------------------------------------
			while (BUT12 == 0x00)
			{
				_delay_us(80);
			};
			//---------------------------------------------------------------------------------------
		};break;
	};
	//---------------------------------------------------------------------------------------
};
//---------------------------------------------------------------------------------------
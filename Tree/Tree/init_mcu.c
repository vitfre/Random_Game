/*
* init_mcu.c
*
* Created: 19.05.2013 22:00:26
*  Author: vitfre
*/
#include "init_mcu.h"
//---------------------------------------------------------------------------------------
void init_mcu(void)
{

	// Input/Output Ports initialization
	// Port A initialization
	// Func2=In Func1=In Func0=In
	// State2=T State1=T State0=T
	PORTA=0x00;
	DDRA=0x00;

	// Port B initialization
	// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=Out Func1=Out Func0=Out
	// State7=T State6=T State5=T State4=T State3=T State2=0 State1=0 State0=0
	PORTB=0x00;
	DDRB=0x07;

	// Port D initialization
	// Func6=In Func5=In Func4=In Func3=Out Func2=In Func1=In Func0=In
	// State6=T State5=T State4=T State3=0 State2=P State1=T State0=T
	PORTD=0x04;
	DDRD=0x08;

	// Timer/Counter 0 initialization
	// Clock source: System Clock
	// Clock value: 250,000 kHz
	// Mode: Normal top=0xFF
	// OC0A output: Disconnected
	// OC0B output: Disconnected
	TCCR0A=0x00;
	TCCR0B=0x03;
	TCNT0=0xFE;
	OCR0A=0x00;
	OCR0B=0x00;

	// Timer/Counter 1 initialization
	// Clock source: System Clock
	// Clock value: 2000,000 kHz
	// Mode: Normal top=0xFFFF
	// OC1A output: Discon.
	// OC1B output: Discon.
	// Noise Canceler: Off
	// Input Capture on Falling Edge
	// Timer1 Overflow Interrupt: On
	// Input Capture Interrupt: Off
	// Compare A Match Interrupt: Off
	// Compare B Match Interrupt: Off
	TCCR1A=0x00;
	TCCR1B=0x02;
	TCNT1H=0x00;
	TCNT1L=0x00;
	ICR1H=0x00;
	ICR1L=0x00;
	OCR1AH=0x00;
	OCR1AL=0x00;
	OCR1BH=0x00;
	OCR1BL=0x00;

	// External Interrupt(s) initialization
	// INT0: On
	// INT0 Mode: Falling Edge
	// INT1: Off
	// Interrupt on any change on pins PCINT0-7: Off
	GIMSK=0x40;
	MCUCR=0x02;
	EIFR=0x40;

	// Timer(s)/Counter(s) Interrupt(s) initialization
	TIMSK=0x82;

	// Universal Serial Interface initialization
	// Mode: Disabled
	// Clock source: Register & Counter=no clk.
	// USI Counter Overflow Interrupt: Off
	USICR=0x00;

	// USART initialization
	// USART disabled
	UCSRB=0x00;

	// Analog Comparator initialization
	// Analog Comparator: Off
	// Analog Comparator Input Capture by Timer/Counter 1: Off
	ACSR=0x80;
	DIDR=0x00;

};
//---------------------------------------------------------------------------------------
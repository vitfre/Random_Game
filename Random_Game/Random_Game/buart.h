#pragma once

#ifndef F_CPU
#define F_CPU 16000000UL // or whatever may be your frequency
#endif

#include <avr/io.h>
#include <avr/interrupt.h>



#define UART_RATE		9600//142800

#define UART_BUFSIZE	128
#define UART_BUFEND		(UART_BUFSIZE-1)

void uart_init();
uint8_t uart_rx_count();
uint8_t uart_read();
void uart_write(uint8_t byte);

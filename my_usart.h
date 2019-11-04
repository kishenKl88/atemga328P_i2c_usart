#ifndef my_usart_H_					/* Define library H file if not defined */
#define my_usart_H_

#include <avr/io.h>								/* Include AVR std. library file */
#define F_CPU 16000000 // Clock Speed
#include <util/delay.h>							/* Include delay header file */
#define BAUD 9600
#define  MYUBRR F_CPU/16/BAUD-1

void USART_Init(unsigned int);
void USART_Transmit(unsigned char);
void print_String(char*);

#endif
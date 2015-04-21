/*
 * TopRevolver.c
 *
 * Created: 4/21/2015 1:02:53 PM
 *  Author: caoyuan9642
 */ 


#include <avr/io.h>
#include <util/delay.h>
#include <avr/pgmspace.h>
int main(void)
{
	DDRA |= _BV(PA0) | _BV(PA1);
	PORTA = 0;
	
    while(1)
    {
        _delay_ms(5);
		PORTA ^= _BV(PA0);
    }
}
/*
 * STOP_WHATCH.c
 *
 * Created: 8/28/2024 12:24:00 PM
 *  Author: elsawah
 */ 


#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "seven.h"
#include "buzzer.h"
#include "LED.h"
int main(void)
{
	seven_seg_init('A');
	buzzer_init('D',1);
	led_init('D',2);
	unsigned char counter; 
    while(1)
    {
		for(counter=9;counter>=0;counter--)
		{
			if(counter==0)
			{
				make_sound('D',1);
				led_on('D',2);
				seven_seg_write('A',0);
			}
			else if(counter>0&&counter<=9){
				seven_seg_write('A',counter);
			}
			_delay_ms(2000);
		}
					
    }
	
}
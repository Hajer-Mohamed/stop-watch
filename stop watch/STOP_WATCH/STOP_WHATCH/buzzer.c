/*
 * buzzer.c
 *
 * Created: 8/28/2024 12:36:50 PM
 *  Author: elsawah
 */ 



void buzzer_init(char port,char pin)
{
	set_pin_dir(port,pin,1);
}

void make_sound(char port,char pin)
{
	DIO_write(port,pin,1);
}

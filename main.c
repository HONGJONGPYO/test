#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD = 0xff;
	PORTD = 0xff;

	while (1)
	{
		_delay_ms(300);
		PORTD=0x00;
		_delay_ms(300);
		PORTD=0xff;
	}
}
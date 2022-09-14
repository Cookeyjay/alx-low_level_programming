#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int n, m;

	for (n = 0; n <= 23; n++)
	{
		for (m = 0; <= 59; m++)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchat('\n');
		}
	}
}

#include "main.h"
/**
 * void print_alphabet_x10 - Prints 10 times the alphabets
 *
 * Description: prints the alphabets in lowercase 10 times plus a new line
 * Return 0
 */
void print_alphabet_x10(void)
{
	char c;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

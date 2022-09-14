#include "main.h"
/**
 * print_alphabet - prints lowercase  alphabets
 *
 * Description: use the print_alphabet function to print lowercase alpha
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

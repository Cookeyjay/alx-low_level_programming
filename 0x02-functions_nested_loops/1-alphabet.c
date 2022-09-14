#include "main.h"
/**
 * print_alphabets - prints lowercase  alphabets
 *
 * Description: use the print_alphabets function to print lowercase alpha
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

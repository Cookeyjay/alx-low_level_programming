#include "main.h"
/**
 * print_sign - Prints the sign of a number
 *
 * @n: The number in which its sign will be printed
 * Return: 1 if n is greater than 0. 0, if = 0, and -1 if less rhan zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

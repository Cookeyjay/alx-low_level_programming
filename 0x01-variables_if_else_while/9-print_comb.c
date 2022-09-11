#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Description: Use the main function toprint single-digit numbers with space & ,
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}

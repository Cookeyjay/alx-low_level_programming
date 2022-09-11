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
		puchar(n);
		puchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}

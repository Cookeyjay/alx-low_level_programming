#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Description: Use the main function to print in an accending order
 * Return: 0
 */
int main(void)
{
	int n;
	int m;
	int x;

	for (n = 0; n < 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (x = m + 1; x < 10; x++)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((x % 10) + '0');
				if (n == 7 && m == 8 && x == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int n;
	int j;
	int prod;

	for (n = 0; n <= 9; n++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = n * j;
			if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
			{
				_putchar((prod % 10) + '0');
			}
			_putchar(',');
			if (prod < 10)
			{
				_putchar(' ');
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}

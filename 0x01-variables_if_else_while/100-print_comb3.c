#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all possible double digits without combination repeatition
 *
 * Description: Use the main function to print double digit numbers
 * Return: 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 9; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			putchar((n % 10) + '0');
			putchar((m % 10) + '0');
			if (n == 8 && m == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

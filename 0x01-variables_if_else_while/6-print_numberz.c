#include <stdio.h>
#include <stdlib.h>
/**
 * main - Putchar all single digit numbers
 *
 * Description: Used main function to puchar all single digit numbers
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');

	return (0);
}

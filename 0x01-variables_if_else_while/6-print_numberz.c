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
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}

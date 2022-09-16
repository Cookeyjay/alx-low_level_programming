#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - Prints all numbers from n to 98
 *
 * @n: Begining of the count
 * Return: 0 always
 */
void print_to_98(int n)
{
	for (n = 0; n <= 97; n++)
	{
		printf("%d, ", n);
	}
	printf("%d\n", 98);
}

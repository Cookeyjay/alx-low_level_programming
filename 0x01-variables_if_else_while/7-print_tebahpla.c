#include <stdlib.h>
#include <stdio.h>
/**
 * main - Putchar alphabets in reverse order
 *
 * Description: Use main function to putchar alphabets in reverse order
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}

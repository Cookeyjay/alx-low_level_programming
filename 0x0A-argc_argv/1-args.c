#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it.
 * @argc: counts arguement
 * @argv: arguements
 *
 * Return: 0
 */
int main(int argc, *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);

	return (0);
}

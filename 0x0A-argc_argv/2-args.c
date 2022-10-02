#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives.
 * @argc: arguement count
 * @argv: arguements
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (argc)
	printf("%s\n", argv[argc]);
	argc++

	return (0);
}

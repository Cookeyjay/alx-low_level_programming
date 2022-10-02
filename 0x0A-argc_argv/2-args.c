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
	(void)argc;
	printf("%d\n", argv);

	return (0);
}

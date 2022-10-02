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
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%d\n", argv[count]);
		}
	}

	return (0);
}

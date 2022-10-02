#include <stdio.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: arguement count
 * @argv: arguements
 *
 * Return: 0 if i == 2, else return 1
 */
int main(int argc, char *argv[])
{
	int i, mul = 0;

	for (i = 1; i < argc; i++)
	{
		if (i == 2)
		{
			mul = atoi(argv[i]) * atoi(argv[i++]);
			printf("%d\n", mul);
			return (0);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
}

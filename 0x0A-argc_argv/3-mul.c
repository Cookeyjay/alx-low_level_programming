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
	int a, b, mul;
	
	if (argc == 3)
	{
		a = atoi(argv[i]);
		b = atoi(argv[i++]);
		mul = a * b;
		printf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}

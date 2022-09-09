#include <stdio.h>
/**
 * main - prints the size of c types in the computer
 *
 * Description: Using the main function
 * This ptogram eill print the size of variabke types in a given computer
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long ll;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(ll));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}

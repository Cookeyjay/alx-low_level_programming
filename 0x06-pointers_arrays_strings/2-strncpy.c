#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	n = sizeof(dest) - strlen(dest);
	_strncpy(dest, src, n);
	dest[sizeof(dest) - 1] = '\0';

	return (dest);
}

#include "main.h"
#include <string.h>

/**
 * _memset -  fills memory with a constant byte.
 *
 * Desctiption: using _memset to fill memoery block
 * @s: address to memory block
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Returns:a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigneg int = a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

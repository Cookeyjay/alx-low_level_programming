#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string.
 * @s: string from which a character is located
 * @c: character to be located
 *
 * Return: @s if char is found, otherwise, return NULL.
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c) return (s);
		if (!*s) return NULL;
	}
	return NULL;
}

#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string from which a character is located
 * @c: character to be located
 *
 * Return: @s if char is found, otherwise, return NULL.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	while (s[i] != '\0')
	{
		s[i];
		if (i == c)
		{
			return (s);
		}
		i++;
	}
	return NULL;
}

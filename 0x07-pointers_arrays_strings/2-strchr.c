#include "main.h"
#include <stdio.h>

/**
 * _strchr -locates a character in a string.
 *
 * @s: pointer to input string
 * @c: character to locate
 *
 * Return: returns pointer to c or NULL
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}

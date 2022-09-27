#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 *
 * @s: an input string
 * @accept: an input character with to locate into string s
 *
 * Return:  Pointer to the byte in s matched
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}

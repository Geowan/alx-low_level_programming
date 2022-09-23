#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * to upper case
 * @s: input pointer to the char
 *
 * Return: pointer to lowercase letters
 */
char *string_toupper(char *s)
{
	char *output = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (output);
}

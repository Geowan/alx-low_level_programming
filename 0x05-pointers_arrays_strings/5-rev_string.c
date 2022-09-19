#include "main.h"

/**
 * rev_string - function that reverse a string
 * followed by a new line.
 *
 * @s: Input string
 * Return: void (Nothing)
 */
void rev_string(char *s)
{
	int length = 0, i = 0;
	char temp;

	while (s[length] != '\0')
		length++;

	while (i < length--)
	{
		temp = s[i];
		s[i++] = s[length];
		s[length] = temp;
	}
}

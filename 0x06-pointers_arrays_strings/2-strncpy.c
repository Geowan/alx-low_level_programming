#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: Destination string pointer
 * @src: Source string pointer
 * @n: input integer value
 * Return: pointer to the result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *output = dest, *basesrc = src;

	while (*src != '\0')
	{
		srclen++;
		src++;
	}
	srclen++;

	if (n > srclen)
		n = srclen;

	src = basesrc;

	for (; i < n; i++)
		*dest++ = *src++;

	return (output);
}

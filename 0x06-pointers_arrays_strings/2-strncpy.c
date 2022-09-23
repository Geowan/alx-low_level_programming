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
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}

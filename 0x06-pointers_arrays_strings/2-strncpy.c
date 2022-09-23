#include "main.h"

/**
 * _strncpy - copies a string.
 *
 * @dest: Destination string pointer
 * @src: Source string pointer
 * @n: input integer value
 *
 * Return: pointer to the result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_length = 0, i = 0;
	char *base_dest = dest, *base_src = src;

	while (*src != '\0')
	{
		src_length++;
		src++;
	}

	if (n > src_length)
		n = src_length;

	src = base_src;

	for (i = 0; i < n; i++)
		*base_dest++ = *src++;

	return (dest);
}

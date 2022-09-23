#include "main.h"

/**
 * _strncat - concatenates two strings by using
 * n bytes from src and
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: Destination string pointer
 * @src: Source string pointer
 * @n: Max n bytes of src to used to determine max bytes used
 * Return:  pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *base_dest = dest, *base_src = src;

	int src_length = 0, incr = 0;

	while (*base_dest != '\0')
		base_dest++;

	while (*src != '\0')
	{
		src_length++;
		src++;
	}

	src = base_src;

	if (n > src_length)
		n = src_length;

	for (incr = 0; incr < n; incr++)
		*base_dest++ = *src++;
	*base_dest = '\0';

	return (dest);
}

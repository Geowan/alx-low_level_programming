#include "main.h"

/**
 * _memcpy -  copies memory area.
 *
 * @dest: pointer to destination copy
 * @src: pointer to source
 * @n: bytes to copy from source
 *
 * Return: returns pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}

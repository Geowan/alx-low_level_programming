#include "main.h"

/**
 * _memset - a function that fills memory with constant bytes
 *
 * @s: pointer to memory area
 * @b: constant b to fill the location
 * @n: bytes of memory
 *
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}

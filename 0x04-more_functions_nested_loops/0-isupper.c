#include "main.h"
#include <ctype.h>

/**
 * _isupper- checks for uppercase character
 *
 * @c: integer to be checked if uppercase
 * Return: 1 if c is uppercase and 0 otherwise
 *
 */
int _isupper(int c)
{
	int res = isupper(c);

	if (res != 0)
		return (1);
	return (0);
}

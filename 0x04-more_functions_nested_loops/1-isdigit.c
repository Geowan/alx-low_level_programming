#include "main.h"
#include <ctype.h>

/**
 * _isdigit- checks for digit 0 - 9
 *
 * @c: integer to be checked if its digit
 * Return: 1 if c is digit and 0 otherwise
 *
 */
int _isdigit(int c)
{
	int res = isdigit(c);

	if (res != 0)
		return (1);
	return (0);
}

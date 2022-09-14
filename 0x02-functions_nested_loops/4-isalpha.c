#include "main.h"
#include <ctype.h>

/**
 * _isalpha- checks for alphabetic character.
 * Description: Checks for alphabetic character
 *
 * @c: character to be checked
 * Return: 1 if c is letter, lowercase
 * or uppercase
 * 0 otherwise
 */
int _isalpha(int c)
{
	int i = isalpha(c);

	if (i != 0)
		return (1);
	return (0);
}

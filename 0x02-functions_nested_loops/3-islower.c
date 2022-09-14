#include "main.h"
#include <ctype.h>
/**
 * _islower - Lower case checker
 * Description: checks for lowercase character.
 *
 * @c: the character to be checked
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	int lower = islower(c);

	if (lower != 0)
		return (1);
	return (0);
}

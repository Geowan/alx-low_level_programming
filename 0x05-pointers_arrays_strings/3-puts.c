#include "main.h"

/**
 * _puts - Function that prints a string, followed by a new line.
 *
 * @str: an input string
 * Return: void (Nothing)
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

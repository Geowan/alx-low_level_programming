#include "main.h"

/**
 * puts2 - Function that prints every other character of a string, starting 
 * with the first character followed by a new line.
 *
 * @str: Input string
 * Return: void
 */
void puts2(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
		length++;

	length -= 1;

	for (i = 0; i <= length; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}

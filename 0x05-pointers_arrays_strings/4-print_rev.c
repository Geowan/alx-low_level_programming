#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 *
 * @s: input string
 * Return: void (Nothing)
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	while (length)
		_putchar(s[--length]);

	_putchar('\n');
}

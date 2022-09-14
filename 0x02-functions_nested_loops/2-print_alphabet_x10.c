#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet
 * Description: prints 10 times the alphabet,
 * in lowercase, followed by a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}

}

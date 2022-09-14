#include "main.h"

/**
 * print_alphabet - prints alphabet
 * Description: Prints alphabet in lowecase followed
 * by a new line
 *
 * Return: void (nothing)
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}

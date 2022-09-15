#include "main.h"


void print_output(int i);

/**
 * print_number - prints an integer.
 *
 * @n: integer passed to the print_number
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		_putchar('-');
		k = -k;
	}
	if (k > 9)
	{
		print_number(k / 10);
	}

	_putchar(k % 10 + '0');
}

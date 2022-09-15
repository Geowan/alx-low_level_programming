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
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		print_number(n / 10);
	}

	_putchar(n % 10 + '0');
}

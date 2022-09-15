#include "main.h"


void print_output(int i);

/**
 * print_number - prints an integer.
 *
 * @n: integer passed to the print_number
 * Return: void
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_output(n * -1);
	}
	else
		print_output(n);
}

/**
 * print_output - Prints the passed integer value
 * @i: integer passed for output
 * Return: void
 */
void print_output(int i)
{
	int j;

	for (j = 100000000; j >= 1; j /= 10)
		if (i / j != 0)
		{
			_putchar((i / j) % 10 + '0');
		}
}

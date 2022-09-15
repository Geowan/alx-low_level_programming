#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: integer which determines lines to be printed
 *
 * Return: void (null)
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}

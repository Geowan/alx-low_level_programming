#include "main.h"

/**
 * print_times_table - multiplication table
 * Description: Prints n times table starting with 0
 *
 * @n: integer passed to the function
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i = 0;

	if (n <= 15 && n >= 0)
	{
		while (i <= n)
		{
			int j = 0;

			while (j <= n)
			{
				int res = (i * j);

				if (res <= 9 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				addoutput(res);
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}

				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}

/**
 * addoutput - Adds the res to the output using
 * _putchar
 *
 * @res: Variable from calculations on print_times_table
 *
 * Return: void
 */
void addoutput(int res)
{
	if (res <= 9)
	{
		_putchar(res + '0');
	}
	else if (res < 100 && res > 9)
	{
		_putchar(' ');
		_putchar((res / 10) + '0');
		_putchar((res % 10) + '0');
	}
	else
	{
		_putchar((res / 100) + '0');
		_putchar((res / 10 % 10) + '0');
		_putchar((res % 10) + '0');
	}
}

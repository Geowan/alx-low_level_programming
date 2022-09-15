#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from
 * 0 to 14
 *
 * Return: void (none)
 */
void more_numbers(void)
{
	int i = 1;

	while (i <= 10)
	{
		int j = 0;

		while (j <= 14)
		{
			_putchar((j % 10) + '0');
			j++;
			if (j > 9 && j <= 14)
			{
				_putchar((j / 10) + '0');
			}
		}
		i++;
		_putchar('\n');
	}

}

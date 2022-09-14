#include "main.h"

/**
 * times_table - Table print
 *
 * Description: prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			int result = i * j;

			if ((result <= 9) && (j != 0))
			{
				_putchar(' ');
			}
			if (result <= 9)
			{
				_putchar(result + '0');

			} else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');

			}
			if (j != 9)
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

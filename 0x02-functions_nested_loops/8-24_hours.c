#include "main.h"

/**
 *jack_bauer - every minute printer
 *
 * Description: prints every minute of the day of
 *  Jack Bauer, starting from 00:00 to 23:59.
 *
 *  Return: void
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	while (i <= 23)
	{
		j = 0;

		while (j <= 59)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');

			j++;
		}
		i++;

	}
}

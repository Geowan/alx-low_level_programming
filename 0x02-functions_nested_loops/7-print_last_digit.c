#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * Description: prints the last digit using
 * % and returns it
 *
 * @a: number passed to retrieve the last digit
 * from
 *
 * Return: a number which is value of last digit
 */
int print_last_digit(int a)
{
	int i = a % 10;

	if (i < 0)
		i = -1 * i;
	_putchar (i + '0');
	return (i);
}

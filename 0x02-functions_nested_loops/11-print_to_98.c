#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers
 * Description: Prints all natural numbers from n to 98
 *
 * @n: integer passed as evaluator to 98
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d", n);
			printf(", ");
			n--;
		}
	} else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			printf(", ");
			n++;
		}
	}
	printf("%d", 98);
	printf("\n");


}

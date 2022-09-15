#include <stdio.h>

/**
 * main - Prints largest prime factor
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int i = 3;
	unsigned long int j = 612852475143;

	for (; i < 12057; i += 2)
	{
		while ((j % i) == 0 && (j != i))
			j = j / i;
	}
	printf("%lu\n", j);
	return (0);
}

#include <stdio.h>

/**
 * main- computes and prints the sum of multiples
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int total = 0;

	while (i < 1024)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
		{
			total += i;
		}
		i++;
	}
	printf("%d\n", total);
	return (0);
}

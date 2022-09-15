#include <stdio.h>

/**
 * main - prints first 98
 * fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 0, b = 1, c = 0, d = 2;
	unsigned long int n1, n2, n3;
	int pos = 2;

	printf("%lu, %lu, ", b, d);
	while (pos < 98)
	{
		if (b + d > 10000000000 || c > 0 || a > 0)
		{
			n1 = (b + d) / 10000000000;
			n2 = (b + d) % 10000000000;
			n3 = a + c + n1;
			a = c, c = n3;
			b = d, d = n2;
			printf("%lu%010lu", c, d);
		}
		else
		{
			n2 = b + d;
			b = d, d = n2;
			printf("%lu", d);
		}
		if (pos != 97)
			printf(", ");
		pos++;
	}
	printf("\n");
	return (0);
}


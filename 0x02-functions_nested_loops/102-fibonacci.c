#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers, 
 * starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int i = 2;
	long int fibonacci[50];
	long int sum = 2;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	while (i < 50)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		if ((fibonacci[i] % 2) == 0 && fibonacci[i] < 4000000)
			sum += fibonacci[i];
		i++;
	}
	printf("%ld\n", sum);

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	char j = 'a';

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}

	while (j <= 'f')
	{
		putchar(j);
		j++;
	}

	putchar('\n');

	return (0);
}

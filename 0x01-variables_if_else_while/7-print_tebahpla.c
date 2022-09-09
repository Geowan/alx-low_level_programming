#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}

	putchar('\n');

	return (0);
}

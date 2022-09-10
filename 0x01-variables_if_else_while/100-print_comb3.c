#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i <= 9)
	{
		j = i + 1;

		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');
			j++;
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}

		}


		i++;
	}

	putchar('\n');
	return (0);
}

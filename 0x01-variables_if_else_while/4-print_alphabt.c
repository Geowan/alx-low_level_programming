#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase except letter q and e
 * Return: Always 0
 */

int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		if (al != 'q' && al != 'e')
		{
			putchar(al);

		}
		al++;
	}

	putchar('\n');
	return (0);

}

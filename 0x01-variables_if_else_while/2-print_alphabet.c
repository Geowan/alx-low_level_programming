#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);
}

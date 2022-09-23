#include "main.h"

/**
 * reverse_array - a function that reverse an array.
 *
 * @a: input array pointer
 * @n: number of items in the array
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int base;

	while (i < n--)
	{
		base = a[i];
		a[i++] = a[n];
		a[n] = base;

	}
}

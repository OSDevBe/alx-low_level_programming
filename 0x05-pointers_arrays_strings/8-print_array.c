#include "main.h"

/**
 * print_array - print n elements of array
 *
 * @a: arg ptr to array if ints
 * @n: arg of int
 *
 * Return: NULL
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}

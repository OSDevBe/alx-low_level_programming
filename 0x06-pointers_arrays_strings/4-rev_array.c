#include "main.h"

/**
 * reverse_array - reverse int array
 *
 * @a: ptr of int array
 * @n: size of array
 *
 * Return: NULL
 */

void reverse_array(int *a, int n)
{
	int tmp, head = 0, tail = n - 1;

	while (head < tail)
	{
		tmp = a[head];
		a[head] = a[tail];
		a[tail] = tmp;
		head++;
		tail--;
	}
}

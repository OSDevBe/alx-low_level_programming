#include "main.h"

/**
 * swap_int - swap value of a & b
 *
 * @a: arg as an int
 * @b: arg as an int
 *
 * Return: NULL
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

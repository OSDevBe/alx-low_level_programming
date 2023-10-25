#include "main.h"

/**
 * factorial - factorial of @n
 *
 * @n: arg int
 *
 * Return: return int factorial of @n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

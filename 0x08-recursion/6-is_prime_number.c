#include "main.h"


/**
 * _fprime - check if it's prime
 *
 * @n: arg int
 *
 * @i: int
 *
 * Return: 1 if prime else 0
 */

int _fprime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_fprime(n, i - 1));
}

/**
 * is_prime_number - says if an integer is a prime number or not
 *
 * @n: arg int
 *
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_fprime(n, n - 1));
}

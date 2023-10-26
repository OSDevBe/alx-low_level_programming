#include "main.h"

/**
 * _fsqrt - functtion for the square root
 *
 * @tmp: int
 *
 * @n: int
 *
 * Return: sqrt int
 */

int _fsqrt(int tmp, int n)
{
	if (tmp * tmp == n)
		return (tmp);
	if (tmp * tmp > n)
		return (-1);
	return (_fsqrt(tmp + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root
 *
 * @n: int
 *
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (_fsqrt(1, n));
}

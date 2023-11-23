#include "main.h"

/**
 * flip_bits - nmbr of flips to get from one number to another
 *
 * @n: nmbr int
 *
 * @m: nmbr int
 *
 * Return: nmbr of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}

#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: nmbr
 *
 * @index: index of bit
 *
 * Return: bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shifted;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	shifted = n >> index;

	bit_value = shifted & 1;

	return (bit_value);
}

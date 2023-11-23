#include "main.h"

/**
 * clear_bit - set nmbr at index to 0
 *
 * @index: index to set
 *
 * @n: ptr nmbr
 *
 * Return: 1 (SUCCESS) or -1 (ERROR)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	mask = ~mask;

	*n &= mask;

	return (1);
}

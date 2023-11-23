#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: nmbr int
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		/* Recursively call the function for the higher-order bits */
		print_binary(n >> 1);
	}

	/* Print the least significant bit */
	_putchar((n & 1) ? '1' : '0');
}

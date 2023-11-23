#include "main.h"

/**
 * binary_to_uint - convert from binary to uint
 *
 * @b: ptr to string binary
 *
 * Return: unisigned int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	j = 0;
	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == '1')
			j += 1;
		else if (b[i] != '0')
			return (0);
	}
	return (j);
}
 
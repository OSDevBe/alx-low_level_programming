#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: un int size
 *
 * Return: ptr or exit(98)
 */

void *malloc_checked(unsigned int b)
{
	void *tmp;

	tmp = malloc(b);

	if (tmp == NULL)
		exit(98);

	return (tmp);
}

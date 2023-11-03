#include "main.h"

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: un int elements
 *
 * @size: un int size
 *
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tmp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	tmp = malloc(nmemb * size);
	if (tmp == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		tmp[i] = 0;

	return (tmp);
}

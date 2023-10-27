#include "main.h"

/**
 * _memcpy - copies @n bytes from @src to @dest
 *
 * @n: arg u int
 *
 * @src: arg char * src
 *
 * @dest: arg char * dest
 *
 * Return: ptr to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

#include "main.h"

/**
 * _memset - fill @n bytes of @s with @b
 *
 * @n: arg  u int 
 *
 * @s: arg char * 
 *
 * @b: char to fill
 *
 * Return: pointer to @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

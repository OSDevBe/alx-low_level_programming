#include "main.h"

/**
 * _strcpy - copy from src to dest
 *
 * @dest: arg ptr to string
 *
 * @src: arg ptr to string
 *
 * Return: char *
 */

char *_strcpy(char *dest, char *src)
{
	int i, a;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
#include "main.h"

/**
 * _strncpy - copy a string n char
 *
 * @src: arg ptr string source
 * @dest: arg pts string destination
 * @n: arg int nmbr of char
 *
 * Return: ptr string of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
		dest[i++] = '\0';

	return (dest);
}

#include "main.h"

/**
 * _strncat - concatenates two strings n char
 *
 * @src: arg ptr string source
 * @dest: arg pts string destination
 * @n: arg int nmbr of char
 *
 * Return: ptr string of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
		dest[i++] = src[j++];

	dest[i] = '\0';

	return (dest);
}

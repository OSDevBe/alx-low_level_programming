#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @src: arg ptr string source
 * @dest: arg pts string destination
 *
 * Return: ptr string of dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
		dest[i++] = src[j++];

	dest[i] = '\0';

	return (dest);
}

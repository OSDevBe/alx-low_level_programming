#include "main.h"

/**
 * _strpbrk - searche a string for any of a set of bytes
 *
 * @s: string
 *
 * @accept: string
 *
 * Return: ptr byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s[i]);
		}
		s++;
	}
	return (NULL);
}

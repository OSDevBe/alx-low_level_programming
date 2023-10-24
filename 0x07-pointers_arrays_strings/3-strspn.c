#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: char * src
 *
 * @accept: char * prefix
 *
 * Return: nbr bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int sum = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					sum++;
			}
		}
		else
			return (sum);
	}
	return (sum);
}

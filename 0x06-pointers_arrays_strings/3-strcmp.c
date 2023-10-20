#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: arg ptr string
 * @s2: arg ptr string
 *
 * Return: negative if s1 < s2, 0 if s1 == s2
 * positif if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (0);
}

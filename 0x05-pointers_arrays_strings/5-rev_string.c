#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: arg ptr to str
 *
 * Return: NULL
 */

void rev_string(char *s)
{
	int i, j, len = 0;
	char tmp;

	while (s[len] != '\0')
		len++;

	i = len - 1;
	j = 0;

	while (i >= (len / 2))
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
		j++;
	}
}

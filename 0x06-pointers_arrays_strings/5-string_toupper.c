#include "main.h"

/**
 * string_toupper - from lower to upper
 *
 * @s: arg ptr to string
 *
 * Return: arg ptr of string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= "Z")
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}

#include "main.h"

/**
 * string_toupper - from lower to upper
 *
 * @s: arg ptr to string
 *
 * Return: arg ptr of string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

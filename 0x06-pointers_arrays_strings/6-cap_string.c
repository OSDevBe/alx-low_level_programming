#include "main.h"

/**
 * cap_string - cap first char of a word
 *
 * @str: arg ptr to string
 *
 * Return: arg ptr of string
 */

char *cap_string(char *str)
{
	int i = 0, j;
	char scar[13] = {' ', '\t', '\n', ',', ';', '.',
						'!', '?', '"', '(', ')', '{', '}'};

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
				str[i] = str[i] - 32;
			}
			else
			{
				for (j = 0; j < 13; j++)
				{
					if (str[i - 1] == scar[j])
						str[i] = str[i] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}

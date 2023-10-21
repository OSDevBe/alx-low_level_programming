#include "main.h"

/**
 * leet - mozart 1337
 * =
 * @str: arg ptr to string
 *
 * Return: arg ptr of string
 */

char *leet(char *str)
{
	int i, j;
	char lchar[] = "aAeEoOtTlL";
	char lrep[] = "4433007711";

	i = 0;

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (lchar[j] == str[i])
				str[i] = lrep[j];
		}
		i++;
	}
	return (str);
}

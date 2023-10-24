#include "main.h"

/**
 * _strstr - locate a substring
 *
 * @haystack: string
 *
 * @needle: string to locate
 *
 * Return: ptr to start of string
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while ( haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}

		if (!needle[j])
			return (&haystack[i]);

		i++;
	}
	return (NULL);
}

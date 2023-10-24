#include "main.h"

/**
 * _strchr - look for @c in @s
 *
 * @c: char
 *
 * @s: string
 *
 * Return: ptr to @c in @s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
		return (s);

	return (NULL);
}

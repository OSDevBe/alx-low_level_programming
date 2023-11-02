#include "main.h"

/**
 * string_nconcat - concat @s1 & n of @s2
 *
 * @s1: string
 *
 * @s2: string
 *
 * @n: n char of @s2
 *
 * Return: ptr or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1, l2;
	char *str;

	l1 = 0;
	l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	if (l2 <= n)
		l2 = n;

	str = malloc((l1 + l2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++, i++)
		str[i] = s2[j];

	str[i] = '\0';

	return (str);
}

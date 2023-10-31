#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concat @s1 & @s2
 *
 * @s1: arg string
 *
 * @s2: arg string
 *
 * Return: ptr to concat string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, l1, l2, lsum;
	char *ptr;

	l1 = 0;
	l2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			l1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			l2++;
	}

	lsum = l1 + l2;
	ptr = (char *)malloc(sizeof(char) * (lsum + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < l2; j++, i++)
		ptr[i] = s2[j];
	ptr[lsum] = '\0';

	return (ptr);
}

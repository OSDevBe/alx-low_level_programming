#include "main.h"
#include <stdlib.h>

/**
 * _strdup - malloc and copy @str
 *
 * @str: src string
 *
 * Return: ptr or NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0, l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
		l++;

	ptr = (char *)malloc(sizeof(char) * (l + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		ptr[i] = str[i];
	ptr[l] = '\0';

	return (ptr);
}

#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: arg ptr to string
 *
 * Return: NULL
 */

void puts2(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
	{
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
		len++;
	}
	_putchar('\n');
}

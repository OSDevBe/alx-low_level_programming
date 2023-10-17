#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: arg pointer to string
 *
 * Return: NULL
 */

void puts_half(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
		len++;

	len++;

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len - 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

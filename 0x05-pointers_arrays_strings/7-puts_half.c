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

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = ((len - 1) / 2) + 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
}

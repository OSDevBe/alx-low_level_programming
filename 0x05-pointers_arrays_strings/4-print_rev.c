#include "main.h"

/**
 * print_rev - print the string in rev
 *
 * @s: arg pointer to string
 *
 * Return: NULL
 */

void print_rev(char *s)
{
	int i, len = 0;

	while (s[len] != '\0')
		len++;

	i = len - 1;

	while (i >= 0)
		_putchar(s[i--]);

	_putchar('\n');
}

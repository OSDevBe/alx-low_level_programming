#include"main.h"

/**
 * print_sign - print the sign of the number
 * 				or zero if it's 0
 *
 * @n: arg is an int
 *
 * Return: 1 or 0 or -1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

#include"main.h"

/**
 * print_last_digit - print last digit of the arg.
 *
 * @n: arg as an integer
 *
 * Return: int of lastnumber
*/

int print_last_digit(int n)
{
	int tmp;

	if (n < 0)
		tmp = -1 * (n % 10);
	else
		tmp = n % 10;

	_putchar(tmp + '0');

	return (tmp);
}

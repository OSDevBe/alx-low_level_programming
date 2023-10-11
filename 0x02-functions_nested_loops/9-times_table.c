#include "main.h"

/**
 * times_table - prints the 9 times table
 *
*/

void times_table(void)
{
	int num, mult, res;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			res = num * mult;

			/*
			 * put space if product is a single number
			 * place the first digit if its two numbers
			*/
			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0'); /*get the first digit*/

			_putchar((res % 10) + '0'); /*get the second digit*/
		}
		_putchar('\n');
	}
}

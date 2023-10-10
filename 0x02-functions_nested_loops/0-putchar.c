#include "main.h"

/**
 * main - Entry point
 *
 * Description: print "_putchar" with the function provided
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
    int c;
	char str[] = "_putchar";

	for (c = 0; c < 8; c++)
		_putchar(str[c]);
	_putchar('\n');

	return (0);
}

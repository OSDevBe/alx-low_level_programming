#include "main.h"

/**
 * print_alphabet_x10 - print alphabet a-z 10 times
 *
*/

void print_alphabet_x10(void)
{
	int i = 0, alpha;

	while (i <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
		i++;
	}
}

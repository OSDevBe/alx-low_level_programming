#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet using putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'Z';

	while (c <= 'Z')
 	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}

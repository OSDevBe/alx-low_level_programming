#include "variadic_functions.h"

/**
 * print_numbers - prints nbrs
 *
 * @n: arg int
 *
 * @separator: char seperator
 *
 * Return: 0 (SUCCESS)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}

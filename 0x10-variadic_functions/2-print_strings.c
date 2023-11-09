#include "variadic_functions.h"

/**
 * print_strings - Print strings
 *
 * @separator: string seperator
 *
 * @n: nbr args
 *
 * Return: 0 (SUCCESS)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}

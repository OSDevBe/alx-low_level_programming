#include "main.h"

/**
 * _islower - function to check if
 *           char os lowercase
 *
 * @c: arg as an int represent char
 *
 * Return: returns 1 if `c` is lowercase
 *         otherwise 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}

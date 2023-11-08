#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using func
 *
 * @name: string name
 *
 * @f: function name
 *
 * Rteurn: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
#include "function_pointers.h"

/**
 * array_iterator - run funct on int
 *
 * @array: array of int
 *
 * @size: size of array
 *
 * @action: ptr to funct wiht int arg
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		i = 0;
		while (i < size)
		{
			action(array[i++]);
		}
	}
}

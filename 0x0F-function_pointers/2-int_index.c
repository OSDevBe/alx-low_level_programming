#include "function_pointers.h"

/**
 * int_index - funct compare int
 *
 * @array: array int
 *
 * @size: size array
 *
 * @cmp: funct compare arg int
 *
 * Return: int index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}

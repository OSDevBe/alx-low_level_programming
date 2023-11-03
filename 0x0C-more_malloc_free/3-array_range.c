#include "main.h"

/**
 * *array_range - array of int from @min to @max
 *
 * @min: int min
 *
 * @max: int max
 *
 * Return: ptr array
 */

int *array_range(int min, int max)
{
	int i;
	int *tmp;

	if (min > max)
		return (NULL);

	tmp = malloc(sizeof(int) * (max - min + 1));

	if (tmp == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		tmp[i] = min++;

	return (tmp);
}

#include "lists.h"

/**
 * list_len - length of list
 *
 * @h: list ptr
 *
 * Return: nbr of nodes
 */

size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *tmp = h;

	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

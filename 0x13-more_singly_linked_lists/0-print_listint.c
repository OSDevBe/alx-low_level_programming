#include "lists.h"

/**
 * print_listint - print all elem of list
 *
 * @h: ptr to head list
 *
 * Return: nbr of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

#include "lists.h"

/**
 * listint_len - count nmbr of elem in list
 *
 * @h: ptr to head of list
 *
 * Return: nmbr of elemts
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

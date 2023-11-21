#include "lists.h"

/**
 * get_nodeint_at_index - get nth node of list
 *
 * @head: ptr to head list
 *
 * @index: index if node
 *
 * Return: ptr to Index or NULL if not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}

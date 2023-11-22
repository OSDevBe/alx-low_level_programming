#include "lists.h"

/**
 * insert_nodeint_at_index - add node at @idx
 *
 * @head: ptr ptr to head
 *
 * @idx: index of node
 *
 * @n: elem data
 *
 * Return: the address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp, *new;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		tmp = *head;
		for (i = 0; i < idx - 1 && tmp != NULL; i++)
		{
			tmp = tmp->next;
		}
		if (tmp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}

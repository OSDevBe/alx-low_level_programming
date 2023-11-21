#include "lists.h"

/**
 * free_listint2 - free list 2
 *
 * @head: ptr to head of the list
 *
 * Return: VOID
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}

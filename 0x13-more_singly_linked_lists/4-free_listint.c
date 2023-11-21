#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: ptr to head of the list
 *
 * Return: VOID
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

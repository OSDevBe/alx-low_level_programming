#include "lists.h"

/**
 * pop_listint - pop the head node
 *
 * @head: ptr ptr to head list
 *
 * Return: data n or 0 if list empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmpHead;
	int n;

	if (*head == NULL)
		return (0);
	tmpHead = *head;
	*head = tmpHead->next;
	n = tmpHead->n;
	free(tmpHead);
	return (n);
}

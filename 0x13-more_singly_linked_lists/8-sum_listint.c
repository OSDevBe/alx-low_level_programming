#include "lists.h"

/**
 * sum_listint - sum list
 *
 * @head: ptr to head list
 *
 * Return: sum or 0 if list empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

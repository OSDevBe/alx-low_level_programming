#include "lists.h"

/**
 * free_list - free all the list
 *
 * @head: ptr to the list
 *
 * Return: VOID
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}

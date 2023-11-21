#include "lists.h"

/**
 * add_nodeint - add node at begining of list
 *
 * @head: ptr ptr to head list
 *
 * @n: int elem to add
 *
 * Return: addr to new elem or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}

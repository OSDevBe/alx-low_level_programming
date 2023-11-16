#include "lists.h"

/**
 * print_list - print list
 *
 * @h: list ptr
 *
 * Return: nmbr of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	list_t *tmp = h;
 
	while (tmp)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
		}
		count++;
		tmp = tmp->next;
	}
	return (count);
}

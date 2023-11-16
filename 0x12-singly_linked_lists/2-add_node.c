#include "lists.h"

/**
 * _strlen - string length
 *
 * @s : string
 *
 * Return: lenght of @s
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - add a new node to begining of list
 *
 * @head: ptr to list head
 *
 * @str: element string
 *
 * Return: addr of new node or NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);

	tmp->len = _strlen(str);
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}

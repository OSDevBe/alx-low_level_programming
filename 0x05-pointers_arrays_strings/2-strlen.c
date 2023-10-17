#include "main.h"

/**
 * _strlen - manual strlen
 *
 * @s: arg string ptr
 *
 * Return: s length
 */

int _strlen(char *s)
{
	int i;

	while(*s++ != '\0')
		i++;

	return (i);
}

#include "main.h"

/**
 * _isalpha - checks if character is a letter
 *
 * @c: takes char as an int.
 *
 * Return: 1 if c a letter in ASCCI else 0
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||
	    (c >= 65 && c <= 90))
		return (1);

	return (0);

}

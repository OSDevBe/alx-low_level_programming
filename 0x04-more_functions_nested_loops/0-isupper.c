/**
 * _isupper - check if c is uppercase
 *
 * @c: input is a char as an int
 *
 * Return: 1 if its uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

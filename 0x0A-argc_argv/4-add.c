#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isNumber - check string if nbr
 *
 * @num: string
 *
 * Return: 0 if nbr 1 if not
 */

int _isNumber(char num[])
{
	int i, len = strlen(num);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(num[i]))
			return (1);
	}
	return (0);
}

/**
 * main - sum nbrs
 *
 * @argc: arg count
 *
 * @argv: args
 *
 * Return: 0 Success or 1 ERROR
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (_isNumber(argv[i]) == 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

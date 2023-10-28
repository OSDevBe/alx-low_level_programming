#include "main.h"
#include <stdlib.h>

/**
 * main - mul two int
 *
 * @argc: arg count
 *
 * @argv: args
 *
 * Return: 0 Success or 1 ERROR
 */

int main(int argc, char **argv)
{
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		res = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", res);
	}
	return (0);
}

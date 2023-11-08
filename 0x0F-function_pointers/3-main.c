#include "3-calc.h"

/**
 * main - main
 *
 * @argc: nbr of args
 *
 * @argv: args
 *
 * Return: 0 (SUCCESS) OR ERROR
 */

int main(int argc, char *argv[])
{
	int (*foprtr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	foprtr = get_op_func(argv[2]);

	if (!foprtr)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", foprtr(atoi(argv[1]), atoi(argv[3])));

	return (0);
}

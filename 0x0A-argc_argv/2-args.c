#include "main.h"

/**
 * main - print args
 *
 * @argc: arg count
 *
 * @argv: args
 *
 * Return: 0 SUCCESS
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

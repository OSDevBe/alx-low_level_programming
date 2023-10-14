#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the from 1 - 100
 * Fizz for % 3, Buzz for % 5,
 * and FizzBuzz for both
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
	}

	printf("\n");
	
	return (0);
}

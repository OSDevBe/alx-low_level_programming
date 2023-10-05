#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints size of various types
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	/* print size of types char, int, long int, long long int and float */
	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(float));

	return (0);
}

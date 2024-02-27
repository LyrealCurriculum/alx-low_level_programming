#include <stdio.h>

/**
 * main - prints the sizes of various data types,
 * followed by new line.
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n"
			"Size of an int: %ld byte(s)\n"
			"Size of a long int: %ld byte(s)\n"
			"Size of a long long int: %ld byte(s)\n"
			"Size of a float: %ld byte(s)\n", sizeof(char), sizeof(int),
			sizeof(long int), sizeof(long long int), sizeof(float));
	return (0);
}

#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		putchar(abc);
	for (abc = 'A'; abc <= 'Z'; abc++)
		putchar(abc);
	putchar('\n');
	return (0);
}

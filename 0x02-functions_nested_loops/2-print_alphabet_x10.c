#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char abc;
	int n = 0;

	while (n < 10)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
		n++;
	}
}

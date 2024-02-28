#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except q and e,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if (abc != 'e' && abc != 'q')
		{
			putchar(abc);
		}
	}
	putchar('\n');
	return (0);
}

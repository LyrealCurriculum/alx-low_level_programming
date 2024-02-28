#include <stdio.h>

/**
 * main - prints all possible different combinations of two differing base 10
 * digits, in ascending order of only the smallest combination of them.
 *
 * Return: 0
 */
int main(void)
{
	int n = 1;

	while (n <= 89)
	{
		if ((n / 10) != (n % 10) && (n / 10) < (n % 10))
		{
			putchar(n / 10 + 48);
			putchar(n % 10 + 48);
			if (n != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		n++;
	}
	putchar('\n');
	return (0);
}

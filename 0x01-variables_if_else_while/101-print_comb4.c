#include <stdio.h>

/**
 * main - prints all possible different combinations of three differing base 10
 * digits, in ascending order of only the smallest combination of them.
 *
 * Return: 0
 */
int main(void)
{
	int n = 12;

	while (n <= 789)
	{
		if ((((n / 100) != (n / 10) % 10) && (n / 100) != (n % 10)
					&& (n / 10) % 10 != (n % 10)) &&
				(((n / 100) < (n / 10) % 10) && (n / 100) < (n % 10)
				 && (n / 10) % 10 < (n % 10)))
		{
			putchar(n / 100 + 48);
			putchar((n / 10) % 10 + 48);
			putchar(n % 10 + 48);
			if (n != 789)
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

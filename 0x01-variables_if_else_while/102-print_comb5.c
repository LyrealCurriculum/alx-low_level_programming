#include <stdio.h>

/**
 * main - prints all possible different combinations of two differing two-digit
 * base 10 numbers, separated by a space and in ascending order.
 *
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n <= 98)
	{
		int r = 1;

		while (r <= 99)
		{
			if (n < r)
			{
				putchar(n / 10 + 48);
				putchar(n % 10 + 48);
				putchar(' ');
				putchar(r / 10 + 48);
				putchar(r % 10 + 48);
				if (n != 98 || r != 99)
				{
					putchar(',');
					putchar(' ');
				}

			}
			r++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}

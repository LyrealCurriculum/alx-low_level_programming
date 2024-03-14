#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	long int l, m;
	long int n = 612852475143;

	for (l = 3; l <= n; l += 2)
	{
		for (; n % l == 0; n /= l)
		{
			if (n != 1)
			{
				m = n;
			}
		}
	}
	printf("%ld\n", m);
	return (0);
}

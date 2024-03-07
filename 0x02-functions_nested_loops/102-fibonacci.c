#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int n;
	long int p = 1, q = 2, r;

	for (n = 0; n < 50; n++)
	{
		r = p + q;
		if (n != 49)
		{
			printf("%ld, ", p);
		} else
		{	printf("%ld\n", p);
		}
		p = q;
		q = r;
	}
	return (0);
}

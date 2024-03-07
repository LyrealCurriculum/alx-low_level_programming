#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int n;
	long int p = 1, q = 2, sum = 0, r;

	for (n = 0; p <= 4000000; n++)
	{
		r = p + q;
		if (p % 2 == 0)
		{
			sum = sum + p;
		}
		p = q;
		q = r;
	}
	printf("%ld\n", sum);
	return (0);
}

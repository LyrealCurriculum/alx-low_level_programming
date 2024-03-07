#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded), followed by new line.
 *
 * Return: 0
 */
int main(void)
{
	int n;
	long int sum3 = 0, sum5 = 0;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0)
		{	sum3 = sum3 + n;
		}
		else if (n % 5 == 0)
		{	sum5 = sum5 + n;
		}
	}
	printf("%ld\n", (sum3 + sum5));
	return (0);
}

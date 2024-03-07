#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int n;
	unsigned long int p = 1, q = 2, r;
	unsigned long int p1, p2, q1, q2, r1, r2;

	for (n = 0; n < 90; n++)
	{	r = p + q;
		printf("%lu, ", p);
		p = q;
		q = r;
	}
	p1 = p / 1000000000;
	p2 = p % 1000000000;
	q1 = q / 1000000000;
	q2 = q % 1000000000;
	for (n = 90; n < 98; n++)
	{	r1 = p1 + q1;
		r2 = p2 + q2;
		if (n < 97)
		{	printf("%lu", p1 + p2 / 1000000000);
			printf("%lu, ", p2 % 1000000000);
		} else
		{       printf("%lu", p1 + p2 / 1000000000);
			printf("%lu\n", p2 % 1000000000);
		}
		p1 = q1;
		p2 = q2;
		q1 = r1;
		q2 = r2;
	}
	return (0);
}

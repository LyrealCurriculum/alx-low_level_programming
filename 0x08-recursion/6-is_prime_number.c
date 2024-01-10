#include "main.h"

/**
 * is_prime_a - identifies prime number
 * @a: integer number
 * @b: divisor
 * Return: 1 if prime or 0 if not
 */
int is_prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}

/**
 * is_prime_number - identifies prime number
 * @n: integer number
 * Return: 1 if prime or 0 if not
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}

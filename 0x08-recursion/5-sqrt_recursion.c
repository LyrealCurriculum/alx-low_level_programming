#include "main.h"

/**
 * _sqrt_a - returns natural square root of number
 * @a: integer number
 * @b: integer iterator
 * Return: natural square root of number
 */
int _sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (_sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - returns natural square root of number
 * @n: integer number
 * Return: natural square root of number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_a(n, 0));
}

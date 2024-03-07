#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number whose last digit is to be printed.
 *
 * Return: value of the last digit.
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0 || n < 0)
	{
		m = -m;
		n = -n;
	}	
	_putchar(m + '0');
	return (m);
}

#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{	m = -n;
		_putchar('-');
	} else
	{
		m = n;
	}
	if (m > 999999999)
		_putchar(m / 1000000000 + '0');
	if (m > 99999999)
		_putchar((m / 100000000) % 10 + '0');
	if (m > 9999999)
		_putchar((m / 10000000) % 10 + '0');
	if (m > 999999)
		_putchar((m / 1000000) % 10 + '0');
	if (m > 99999)
		_putchar((m / 100000) % 10 + '0');
	if (m > 9999)
		_putchar((m / 10000) % 10 + '0');
	if (m > 999)
		_putchar((m / 1000) % 10 + '0');
	if (m > 99)
		_putchar((m / 100) % 10 + '0');
	if (m > 9)
		_putchar((m / 10) % 10 + '0');
	_putchar(m % 10 + '0');
}

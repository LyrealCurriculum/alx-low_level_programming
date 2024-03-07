#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{	int p, q;

		for (p = 0; p <= n; p++)
		{
			for (q = 0; q <= n; q++)
			{
				if (p * q == 0)
				{	_putchar(p * q + '0');
					if (p == 0 && q < n)
					{	_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				} else if ((p * q) / 10 == 0)
				{	_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((p * q) % 10 + '0');
				} else if ((p * q) / 10 < 10)
				{	_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((p * q) / 10 + '0');
					_putchar((p * q) % 10 + '0');
				} else if ((p * q) / 10 >= 10)
				{	_putchar(',');
					_putchar(' ');
					_putchar((p * q) / 100 + '0');
					_putchar(((p * q) / 10) % 10 + '0');
					_putchar((p * q) % 10 + '0');
				}
				if (q == n)
				{	_putchar('\n');
				}
			}
		}
	}
}

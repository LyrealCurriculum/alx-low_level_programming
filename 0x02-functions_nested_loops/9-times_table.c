#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int m, n;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if (m * n == 0)
			{
				_putchar(m * n + '0');
				if (m == 0 && n < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if ((m * n) / 10 == 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((m * n) % 10 + '0');
			}
			else if ((m * n) / 10 > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m * n) / 10 + '0');
				_putchar((m * n) % 10 + '0');
			}
			if (n == 9)
			{
				_putchar('\n');
			}
		}
	}
}

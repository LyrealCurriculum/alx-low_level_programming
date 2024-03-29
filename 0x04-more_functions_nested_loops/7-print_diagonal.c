#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed.
 */
void print_diagonal(int n)
{
	int l, m;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (l = 0; l < n; l++)
		{
			for (m = 0; m < n; m++)
			{
				if (m == l)
				{
					_putchar('\\');
				} else if (m < l)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

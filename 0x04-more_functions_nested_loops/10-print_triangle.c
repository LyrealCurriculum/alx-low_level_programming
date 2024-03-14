#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle.
 */
void print_triangle(int size)
{
	int m, n;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (m = 1; m <= size; m++)
		{
			for (n = 1; n <= size; n++)
			{
				if (n <= size - m)
				{
					_putchar(' ');
				} else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)

{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}

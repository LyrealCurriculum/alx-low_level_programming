#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns no. of elements in linked list
 * @h: pointer to list_t list
 * Return: no. of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

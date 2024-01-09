#include "main.h"

/**
 * *_strpbrk - searches string for any set of bytes
 * @s: string
 * @accept: other string
 * Return: pointer to bytes in s that matches bytes in accept or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (8s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}

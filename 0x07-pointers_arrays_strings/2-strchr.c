#include "main.h"

/**
 * *_strchr - locates character in string
 * @s: string
 * @c: character
 * Return: pointer to first occurence of c in s or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

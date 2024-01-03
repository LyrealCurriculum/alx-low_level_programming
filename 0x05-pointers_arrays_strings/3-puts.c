#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * Return: length
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	_putchar ('\n')
}

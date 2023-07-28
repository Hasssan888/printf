#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: The string to be printed.
 *
 * Return: The number of characters printed.
 */
int _puts(char *str)
{
	int count = 0;

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	count += _putchar('\n');

	return (count);
}

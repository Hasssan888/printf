#include "main.h"
#include <stdio.h>

/**
 * print_address - Prints the address of a pointer in hexadecimal.
 * @p: The pointer whose address needs to be printed.
 *
 * Return: The number of characters printed.
 */
int print_address(void *p)
{
	int count = 0;
	unsigned long int address = (unsigned long int)p;
	char hex[16];
	int i;

	count += _putchar('0');
	count += _putchar('x');

	if (!address)
		return (count += _putchar('0'));

	for (i = 0; address; i++)
	{
		hex[i] = "0123456789abcdef"[address % 16];
		address >>= 4;
	}

	while (i-- > 0)
		count += _putchar(hex[i]);
	return (count);
}

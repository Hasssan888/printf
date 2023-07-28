#include "main.h"

/**
 * print_number - Prints a signed integer to the standard output.
 * @n: The integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_number(int n)
{
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
		num = n;
	if (num / 10 != 0)
		count += print_number(num / 10);
	count += _putchar('0' + num % 10);
	return (count);
}

/**
 * print_unsigned - Prints an unsigned integer to the standard output.
 * @num: The unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_unsigned(unsigned int num)
{
	int count = 0;

	if (num / 10 != 0)
		count += print_unsigned(num / 10);

	count += _putchar('0' + num % 10);
	return (count);
}

/**
 * print_octal - Prints a number in octal format to the standard output.
 * @num: The number to be printed.
 *
 * Return: The number of characters printed.
 */
int print_octal(unsigned int num)
{
	int count = 0;
	char octal[100];
	int i = 0;

	if (num == 0)
		count += _putchar('0');
	while (num != 0)
	{
		octal[i++] = (num % 8) + '0';
		num = num / 8;
	}

	while (i > 0)
		count += _putchar(octal[--i]);
	return (count);
}

/**
 * print_hexadecimal - Prints a number in
 *                     hexadecimal format to the standard output.
 * @num: The number to be printed.
 * @uppercase: A flag indicating if the output should be
 *                   uppercase (1) or lowercase (0).
 *
 * Return: The number of characters printed.
 */
int print_hexadecimal(unsigned int num, int uppercase)
{
	int count = 0;
	char hex[100];
	int i = 0;

	if (num == 0)
		count += _putchar('0');

	while (num != 0)
	{
		int remainder = num % 16;

		if (remainder < 10)
			hex[i++] = remainder + '0';
		else
			hex[i++] = (uppercase ? 'A' : 'a') + remainder - 10;
		num = num / 16;
	}
	while (i > 0)
		count += _putchar(hex[--i]);
	return (count);
}
/**
 * print_binary - Prints a number in binary format to the standard output.
 * @num: The number to be printed.
 *
 * Return: None (void).
 */
void print_binary(unsigned int num)
{
	int binary[100];
	int i = 0;

	if (num == 0)
		_putchar('0');

	while (num != 0)
	{
		binary[i++] = num % 2;
		num = num / 2;
	}
	while (i > 0)
		_putchar('0' + binary[--i]);
}

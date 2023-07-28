#include "main.h"

/**
 * print_reversed_string - Prints a string
 *           in reverse order to the standard output.
 * @str: The input string to be printed in reverse.
 *
 * Return: The number of characters printed.
 */
int print_reversed_string(char *str)
{
	int len, i;
	int count = 0;

	len = _strlen(str);

	for (i = len - 1; i >= 0; i--)
		count += _putchar(str[i]);

	return (count);
}
/**
 * print_rot13_string - Applies the ROT13 cipher
 *             to a string and prints it to the standard output.
 * @str: The input string to be encoded using ROT13.
 *
 * Return: The number of characters printed.
 */
int print_rot13_string(char *str)
{
	int count = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			count += _putchar(str[i] + 13);
		else if ((str[i] >= 'n' && str[i] <= 'z') ||
				(str[i] >= 'N' && str[i] <= 'Z'))
			count += _putchar(str[i] - 13);
		else
			count += _putchar(str[i]);
	}
	return (count);
}

/**
 * print_non_printable_string - Prints a string with
 *                  non-printable characters represented in hexadecimal format.
 * @str: The input string to be printed with non-printable characters escaped.
 *
 * Return: The number of characters printed.
 */
int print_non_printable_string(char *str)
{
	int count = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 32 && str[i] < 127)
			count += _putchar(str[i]);
		else
		{
			count += _putchar('\\');
			count += _putchar('x');
			if (str[i] < 16)
				count += _putchar('0');
			count += print_hexadecimal((unsigned int)str[i], 1);
		}
	}
	return (count);
}

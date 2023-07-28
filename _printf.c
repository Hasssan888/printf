#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: The format string containing the directives.
 *
 * Return: The number of characters printed
 *    (excluding the null byte used to end output to strings).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char *str;

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			count += _putchar(*format);
			format++;
			continue;
		}
		format++;
		switch (*format)
		{
			case 'c':
				count += _putchar(va_arg(args, int));
				break;
			case 's':
				str = va_arg(args, char *);
				count += _puts(str);
				break;
			case 'd':
		       	case 'i':
				count += print_number(va_arg(args, int));
				break;
			case 'u':
				count += print_unsigned(va_arg(args, unsigned int));
				break;
			case 'o':
				count += print_octal(va_arg(args, unsigned int));
				break;
			case 'x':
				count += print_hexadecimal(va_arg(args, unsigned int), 0);
				break;
			case 'X':
				count += print_hexadecimal(va_arg(args, unsigned int), 1);
				break;
			case 'b':
				print_binary(va_arg(args, unsigned int));
				count += 8;
				break;
			case 'p':
				count += print_address(va_arg(args, void *));
				break;
			case 'S':
				count += print_non_printable_string(va_arg(args, char *));
				break;
			case 'r':
				count += print_reversed_string(va_arg(args, char *));
				break;
			case 'R':
				count += print_rot13_string(va_arg(args, char *));
				break;
			default:
				count += _putchar('%');
				count += _putchar('r');
		}
				format++;
	}
		va_end(args);
		return (count);
}

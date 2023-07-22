#include "main.h"

/**
 * get_precision - Gets the precision from the format string.
 *
 * This function parses the format string to extract the precision value
 * and updates the `params` struct with the obtained precision.
 *
 * @p: The format string.
 * @params: The parameters struct.
 * @ap: The argument pointer.
 *
 * Return: A new pointer within the format string after parsing the precision.
 */
char *get_precision(char *p, params_t *params, va_list ap)
{
	int d = 0;

	if (*p != '.')
		return (p);
	p++;
	if (*p == '*')
	{
		d = va_arg(ap, int);
		p++;
	}
	else
	{
		while (_isdigit(*p))
			d = d * 10 + (*p++ - '0');
	}
	params->precision = d;
	return (p);
}

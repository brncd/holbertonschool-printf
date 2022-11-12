#include "main.h"

/**
 * _printf - format and print data.
 * @format: The format of the string to print.
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	int i, len = 0; /* len will keep track of number of characters printed */
	char c = 'A';
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1); /* NULL format edgecase */
	for (i = 0; i < _strlen(format); i++)
	{
		if (format[i] == '%')
		{
			c = format[i + 1];
			if (c == '\0')
				return (-1); /* Format string can't end with '%' */
			if (get_func(c) != NULL) /* See get_func.c */
			{
				i++; /* Skips to next to not print the specifier */
				len = len + get_func(c)(args); /* Updates print count (see functions.c) */
			}
			else
			{
				c = format[i];
				write(1, &c, 1); /* Prints character normally */
			}
		}
		else
		{
			c = format[i];
			write(1, &c, 1);
		}
	}
	len = len + i; /* Adds format string's length to print counter */
	va_end(args);
	return (len); /* Returns number of characters printed */
}

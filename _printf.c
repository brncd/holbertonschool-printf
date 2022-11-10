#include "main.h"

/**
 * _printf - format and print data.
 * @format: The format of the string to print.
 * Return: The string's length.
 */

int _printf(const char *format, ...)
{
	int i, len = 0;
	char c = 'A';
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; i < _strlen(format); i++)
	{
		if (format[i] == '%')
		{
			c = format[i + 1];
			if (c == '\0')
				return (-1);
			if (get_func(c) != NULL)
			{
				i++;
				len = len + get_func(c)(args);
			}
			else
			{	
				c = format[i];
				write(1, &c, 1);
			}
		}
		else
		{
			c = format[i];
			write(1, &c, 1);
		}
	}
	len = len + i;
	va_end(args);
	return (len);
}

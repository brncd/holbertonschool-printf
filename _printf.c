#include "main.h"

/**
 * _printf - format and print data.
 * @format: The format of the string to print.
 * Return: The string's length.
 */

int _printf(const char *format, ...)
{
	int i, len = 0;
	char *ch = malloc(sizeof(char));
	va_list args;
	char *next = malloc(sizeof(char));

	va_start(args, format);
	for (i = 0; i <= _strlen(format); i++)
	{
		if (format[i] == '%')
		{
			*next = format[i + 1];
			if (get_func(next) != NULL)
			{
				i++;
				len = len + get_func(next)(args);
			}
		}
		else
		{
			*ch = format[i];
			write(1, ch, 1);
		}
	}
	len = len + i;
	va_end(args);
	return (len - 1);
}

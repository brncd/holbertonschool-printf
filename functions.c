#include "main.h"

/**
 * _strlen - Function that takes a string and returns its length.
 * @_str: The string given.
 * Return: The length of the string.
 */

int _strlen(const char *_str)
{
	int i = 0;

	while (_str[i] != '\0')
		i++;
	return (i);
}

/**
 * put_char - Functions that prints a character argument from another function.
 * @args: The list of arguments from a variadic function.
 * Return: (-1).
 */

int put_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (-1);
}

/**
 * put_string - Function that prints a string argument from another function.
 * @args: The list of arguments from a variadic function.
 * Return: The length of the string minus 2.
 */

int put_string(va_list args)
{
	char *s = va_arg(args, char *);
	
	if (s == NULL)
		s = "(null)";
	
	write(1, s, _strlen(s));
	return (_strlen(s) - 2);
}

/**
 * put_mod - Function that prints a '%', without taking any arguments.
 * @args: The list of arguments from a variadic function.
 * Return: (-1).
 */

int put_mod(__attribute__((unused)) va_list args)
{
	char c = '%';

	write(1, &c, 1);
	return (-1);
}

/**
 * put_int - Functions that prints an integer argument from another function.
 * @args: The list of arguments from a variadic function.
 * Return: The number of digits of the integer minus 2.
 */

int put_int(va_list args)
{
	int n = va_arg(args, int), len;

	len = int_wc(n, 0);
	return (len - 2);
}

#include "main.h"

/**
 * get_func - A function pointer to the function associated with the specifier.
 * @s: A pointer to a character to compare with the elements of array 'specs'.
 * Return: The function associated or NULL if there isn't one.
 */

int (*get_func(const char s))(va_list args)
{
	format_t specs[] = {
		{'c', put_char},
		{'s', put_string},
		{'%', put_mod},
		{'d', put_int},
		{'i', put_int}
		};

	int i;

	for (i = 0; i < 5; i++)
	{
		if (s == specs[i].format_specs)
			return (specs[i].f);
	}
	return (NULL);
}

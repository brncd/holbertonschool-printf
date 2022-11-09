#include "main.h"

/**
 * int_wc - Function that prints a given integer.
 * @n: The integer to print.
 * @i: Length counter.
 * Return: The length of the integer.
 */
int int_wc(int n, int i)
{
	unsigned int d;
	char c, *s;

	if (n < 0)
	{
		c = '-';
		s = &c;
		n = -n;
		write(1, s, 1);
		i = 1;
	}

	if (n != 0)
	{
		d = n % 10;
		c = d + '0';
		s = &c;
		i = int_wc(n / 10, i + 1);
		write(1, s, 1);
		return (i);
	}
	else
	{
		if (i == 0)
		{
			c = n + '0';
			s = &c;
			write(1, s, 1);
			i++;
		}
	}
	return (i);
}

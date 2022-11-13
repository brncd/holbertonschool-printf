#include "main.h"

/**
 * int_wc - Function that prints a given integer.
 * @n: The integer to print.
 * @i: Number of printed characters, given as an argument so it doesn't reset.
 * Return: The length of the integer.
 */
int int_wc(long int n, int i) /* First call should have 0 as second argument */
{
	unsigned int d;
	char c;

	if (n < 0)
	{
		c = '-';
		n = -n;
		write(1, &c, 1);
		i = 1;
	}
	if (n != 0)
	{
		d = n % 10; /* Last digit of n */
		c = d + '0';
		i = int_wc(n / 10, i + 1); /* Remove last digit and increase count */
		write(1, &c, 1); /* Prints after self-call so it prints in correct order */
		return (i);
	}
	else
	{
		if (i == 0) /* Number to print is '0' case */
		{
			c = n + '0';
			write(1, &c, 1);
			i++;
		}
	}
	return (i);
}

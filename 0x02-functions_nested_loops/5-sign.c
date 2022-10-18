#include "main.h"
/**
 * print_sign - tests whether a number is positive, zero or negative
 * @n: The number to be checked.
 * Return: 1 if postive, 0 if zero, -1 if negative and /
 * if not a digit.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}

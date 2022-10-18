#include "main.h"
/**
 * print_last_digit - Prints the last digit of a anumber.
 * @n: The digit to find in the last place.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10 + '0');
	return (n % 10);
}

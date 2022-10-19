#include "main.h"
/**
 * print_last_digit - Prints the last digit of a anumber.
 * @n: The digit to find in the last place.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}

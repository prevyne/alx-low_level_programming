#include "main.h"

/**
 * is_prime_number - Checks if input is a prime number
 * @n: input
 * Return: Always 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * isprime - checks for prime number
 * @n: input to check
 * @i: input
 * Return: number
 */
int isprime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (isprime(n, i - 1));
}

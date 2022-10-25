#include <unistd.h>

/**
 * _putchar - writes character c to standard output
 * @c: The character to be printed
 * Return: 1 0n success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

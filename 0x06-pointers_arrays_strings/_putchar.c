#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - Writes character to std output
 * @c: character to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

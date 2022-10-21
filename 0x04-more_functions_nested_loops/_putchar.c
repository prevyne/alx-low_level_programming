#include <unistd.h>
#include "main.h"

/**
 * _putchar - outputs character to the standard output
 * @c: the character to be printed
 * Return: 1 on success else -1
 */
int  _putchar(char c)
{
	return (write(1, &c, 1));
}

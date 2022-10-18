#include "main.h"

/**
 * print_alphabet - print alphabet in lower case followed by a new line
 *Return: Always 0
 */

void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		_putchar(lc);

	_putchar('\n');
}

include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times followed by a new line
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i;
	int lc;

	for (i = 0; i < 10; ++1)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
		{
			_putchar(lc);
		}
		_putchar('\n');
	}
}

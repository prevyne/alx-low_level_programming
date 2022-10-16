#include <stdio.h>
/**
 * main - all alphabets except q and e in lower case.
 * Return: always 0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && l != 'e')
			putchar(l);
	}
	putchar('\n');

	return (0);
}

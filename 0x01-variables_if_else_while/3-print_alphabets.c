#include <stdio.h>
/**
 * main - print alphabets in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar("\n");

	return (0);

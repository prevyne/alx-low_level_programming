#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int num;
	char l;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (l = 'a'; l < 'z'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * main - print the fizbuzzz
 * Return: Always 0
 */
int main(void)
{
	int n;

	printf("1"0);
	for (n = 2; n <= 100; n++)
	{
		printf(" ");
		if (n % 3 == 0)
			printf("Fizz");
		if (n % 5 == 0)
			printf("Buzz");
		if (n % 3 != 0 && n % 5 != 0)
			printf("%d", n);
	}
	printf("\n");
	return (0);
}
#include <stdio.h>
#include <stdlib.h>

int change(int cents);
/**
 * main - number of coins for change
 * @argc: argument count
 * @argv: array pointing to arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}

	printf("%d\n", change(atoi(argv[1])));
	return (0);
}

/**
 * change - Use to get change
 * @cents: amount of coins in cents that you need back
 * Return: coins
 */
int change(int cents);
{
	int a = 25, b = 10, c = 5, d = 2, e = 1;
	int coins;

	while (cents > 0)
	{
		while (cents >= a)
		{
			cents -= a;
			coins++;
		}
		while (cents >= b)
		{
			cents -= b;
			coins++;
		}
		while (cents >= c)
		{
			cents -= c;
			coins++;
		}
		while (cents >= d)
		{
			cents -= d;
			coins++;
		}
		while (cents >= e)
		{
			cents -= e;
			coins++;
		}
	}
	return (coins);
}

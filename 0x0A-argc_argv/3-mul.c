#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers.
 * atoi - function that converts string to int
 * @argc: argument count
 * @argv: array ppointing to the args
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, pass = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			pass *= atoi(argv[i]);
		}
		printf("%d\n", pass);
	}
	return (0);
}

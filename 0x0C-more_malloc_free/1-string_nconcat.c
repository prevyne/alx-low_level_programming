#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: String 2
 * @n: String 2's number of bytes
 * Return: 0;
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, at, at_s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (n < j)
		j = n;

	j += i;
	arr = malloc(sizeof(char *) * (j + 1));

	if (arr == NULL)
		return (NULL);

	for (at = 0; at < i; at++)
		arr[at] = s1[at];
	for (at_s = 0; at_s < j; at_s++)
	{
		arr[at] = s2[at_s];
		at++;
	}
	at++;
	arr[at] = '\0';
	return (arr);
}

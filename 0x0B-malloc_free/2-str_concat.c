#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings. get ends of input and add together for size
 * @s1: input
 * @s2: input
 * Return: s1 and s2 concatinate
 */
char *str_concat(char *s1, char *s2)
{
	int end1, end2, i = 0;
	char *array;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (end1 = 0; end1 <= *s1; end1++)
	{
	}

	for (end2 = 0; end2 <= *s2; end2++)
	{
	}

	array = malloc(sizeof(char) * (end1 + end2 + 1));

	if (array == NULL)
		return (NULL);

	while (*s1)
	{
		array[i] = *s1;
		i++;
		s1++;
	}
	return (array);
}

#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: difference between the strings
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[1] != '\0' && s2[1] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

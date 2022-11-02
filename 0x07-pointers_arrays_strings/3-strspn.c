#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, content, see;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		see = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				content++;
				see = 1;
			}
		}

		if (see == 0)
			return (content);
	}

	return (content);
}

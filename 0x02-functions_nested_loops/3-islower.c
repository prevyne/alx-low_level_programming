#include "main.h"
/**
 * _islower - Test if a character is lower-case
 * @c: The character to set
 * Return: returns 1 if the letter is lower case and o if its not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

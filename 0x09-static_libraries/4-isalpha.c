#include "main.h"

/**
 * _isalpha - tests if a character is from the English alphabet.
 * @c: The character to be checked.
 * Return: return 1 if it is in the alphabet and 0 when its not in the alphabet
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}

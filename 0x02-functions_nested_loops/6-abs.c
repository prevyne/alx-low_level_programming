#include "main.h"
/**
 * _abs - Calculates the absolute value of an integer
 * @i: The integer to be used
 * Return: The absolute value of the integer i.
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}

#include "main.h"

/**
 * swap_int - Swaps two integers
 * @a: The first integer a
 * @b: Second integer b
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}

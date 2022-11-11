#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Prints a 2D grid of 0s
 * @nmemb: input
 * @size: size of ea array element
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}

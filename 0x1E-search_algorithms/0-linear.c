#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - Performs a linear search on an array
 * @*array: pointer to variable storing the array values
 * @size: size of values
 * @value: values
 * return: array
 */
int linear_search(int *array, size_t size, int value){
	int i;

	for (i = 0; i < size; i++)
		if (*array[i] == value)
			return i;
	return -1;

}

int main(void){
	int array[] = {2,3,4,5,6,10};
	int value = 5;
	size_t n = sizeof(array)/sizeof(array[0]);

	int result = linear_search(array, n, value);
	(result == -1)
		?printf("Value not found")
		:printf("value %d found at %d", value, result);
	return 0;
}

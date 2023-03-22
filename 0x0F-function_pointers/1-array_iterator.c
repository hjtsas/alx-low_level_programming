#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - excute a function
 * @array: array
 * @size: size of the array
 * @action: pointer to the function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

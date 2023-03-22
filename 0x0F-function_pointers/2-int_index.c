#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 * @size: number of elements in the array
 * @array: array
 * @cmp: is a pointer
 * Return: 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

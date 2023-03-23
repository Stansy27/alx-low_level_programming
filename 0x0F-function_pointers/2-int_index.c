#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: the element number in the array
 * @cmp: function to be used to compare values (returns non-zero upon a match)
 *
 * Return: if no match is found or size is less than 1, or if array is NULL or
 * cmp is NULL, return -1. otherwise return the index of the first match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}

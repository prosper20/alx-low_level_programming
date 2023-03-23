#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Integer array.
 * @size: Array size.
 * @cmp: Funtion pointer.
 *
 * Return: 0 or -1 depending on serarch result
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}

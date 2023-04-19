#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}

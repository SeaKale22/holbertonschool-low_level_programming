#include "function_pointers.h"
/**
 * int_index- searches for an int
 * @array: array of int
 * @size: number of elements in array
 * @cmp: The function to use
 *
 * Return: index of element when cmp != 0, no match -1, size <= 0 -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
		return (-1);
	}
}

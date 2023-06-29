#include "function_pointers.h"
/**
 * int_index- searches for an int
 * @array: array of int
 * @size: number of elements in array
 * @cmp: The function to use
 *
 * Return: index of first element for when cmp does not return 0, no match return -1, size <= 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

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

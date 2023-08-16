#include "search_algos.h"
/**
 * linear_search: searches for a value using linear search
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value being searched for
 *
 * Return: Index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int j;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = array[i];
		printf("Value checked array[%ld] = [%d]\n", i, j);
		if (j == value)
			return (i);
	}
	return (-1);
}

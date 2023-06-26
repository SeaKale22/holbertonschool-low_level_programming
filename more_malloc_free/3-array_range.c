#include "main.h"
#include <stdlib.h>
/**
 * array_range- creates array of int
 * min: Min number
 * max: Max number
 *
 * Return: pointer to new array or NULL if fail
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}

#include "main.h"
#include <stdlib.h>
/**
 * create_array- creates an array of chars, initializes it with specific char
 * @size: size of array
 * @c: character to initialize the array to
 *
 * Return: null if size is 0, a pointer to the array, null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

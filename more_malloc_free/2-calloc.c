#include "main.h"
#include <stdlib.h>
/**
 * _calloc- allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: number of bytes for each element
 * Return: pointer to mem allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(size * nmemb);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		((char *)array)[i] = 0;
	}
	return (array);
}

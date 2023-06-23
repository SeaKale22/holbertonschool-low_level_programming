#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked- allocated memory
 * @b: bytes to be assigned
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}

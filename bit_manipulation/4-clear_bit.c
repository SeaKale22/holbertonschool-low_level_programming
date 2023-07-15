#include "main.h"
/**
 * clear_bit- sets a value of a bit to 0 at given index
 * @index: index, starting from 0
 * @n: the number
 *
 * Return: 1 if succsessful, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (n == NULL)
	{
		return (-1);
	}
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = mask << index;
	mask = ~mask;
	*n = *n & mask;
	return (1);
}

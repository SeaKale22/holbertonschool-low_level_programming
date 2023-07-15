#include "main.h"
/**
 * get_bit- findes value of bit at given index
 * @n: number to check
 * @index: the index, starting at 0, if the wanted bit
 *
 * Return: the value of the bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_pos;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bit_pos = (n >> index) & 1;
	return (bit_pos);
}

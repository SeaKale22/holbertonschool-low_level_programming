#include "main.h"
/**
 * flip_bits- finds num bits need to flip to turn one number into anotther
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned long int count = 0;

	while (result != 0)
	{
		if (result & 1)
		{
			count++;
		}
		result >>= 1;
	}
	return (count);
}

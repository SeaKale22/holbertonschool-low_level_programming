#include "main.h"
/**
 * print_binary- prints the binary of a number
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	int bit_pos;
	int non_zero = 0;

	for (bit_pos = (sizeof(unsigned long int) * 8 - 1); bit_pos >= 0; bit_pos--)
	{
		if ((n >> bit_pos) & 1)
		{
			_putchar('1');
			non_zero = 1;
		}
		else if (non_zero)
		{
			_putchar('0');
		}
	}
	if (!non_zero)
	{
		_putchar('0');
	}
}

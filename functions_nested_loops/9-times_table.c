#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: Void
 */
void times_table(void)
{
	int row;
	int col;
	int pro;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			pro = row * col;

			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (pro <= 9)
				_putchar(' ');
			else
				_putchar((pro / 10) + '0');
			_putchar((pro % 10) + '0');
		}

		_putchar('\n');
	}
}

#include "main.h"
/**
 * more_numbers - prints numbers 0-9
 * Return: Void
 */
void more_numbers(void)
{
	int r;
	
	for (r = 0; r < 10; r++)
	{
		int i;
		
		for (i = 0; i <= 14; i++)
		{
			if ( i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}

		_putchar('\n');
	}
}

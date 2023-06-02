#include "main.h"
/**
 * print_line - Prints '_' n number of times
 * @n: The number times '_' should be printed
 *
 * Return: Void
 */
void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

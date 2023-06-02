#include "main.h"
/**
 * print_line - prints _ n number of times
 * @n: The number tomes _ should be printed
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

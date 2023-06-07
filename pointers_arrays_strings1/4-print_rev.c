#include "main.h"
/**
 * print_rev- prints a sting in reverse, followed by a newline to stdout
 * @s: The string to be printed
 */
void print_rev(char *s)
{
	int lgth = 0;
	int c;

	while (s[lgth] != '\0')
		lgth++;

	for (c = lgth - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}

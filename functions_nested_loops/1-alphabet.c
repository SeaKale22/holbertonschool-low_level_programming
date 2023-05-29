#include "main.h"
/**
 * main- prints alphabet followed by newline
 * function print_alphabet- look at the code
 * Return: Always 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');

}

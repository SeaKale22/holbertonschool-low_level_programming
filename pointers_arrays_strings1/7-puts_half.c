#include "main.h"
/**
 * puts_half- prints the second half of a string
 * @str: the string to be printed halfway
 */
void puts_half(char *str)
{
	int lgth = 0;
	int index;

	while (str[lgth] != '\0')
		lgth++;

	if (lgth % 2 == 0)
	{
		index = lgth / 2;
	}
	else
	{
		index = (lgth + 1) / 2;
	}

	for (; index < lgth; index++)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}

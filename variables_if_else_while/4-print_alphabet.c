#include <stdio.h>
/**
 * main - alphabet
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		char lc = 'a' + i;
		if (lc != 'q' && lc != 'e')
		putchar(lc);
	}

	putchar('\n');
	return (0);
}

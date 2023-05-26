#include <stdio.h>
/**
 * main- count in hexa
 *
 * Return: Always 0, success
 */
int main(void)
{
	int hxd = 0;

	while (hxd < 16)
	{
		if (hxd < 10)
			putchar('0' + hxd);
		else
			putchar('a' + hxd - 10);

		hxd++;
	}

	putchar('\n');

	return (0);
}

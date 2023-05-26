#include <stdio.h>
/**
 * main - prints numbers
 *
 * Return: Always 0 success
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}

	putchar('\n');

	return (0);
}

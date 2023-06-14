#include "main.h"
/**
 * factorial- calculates factorial of a number
 * @n: a given number
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}

#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @n: a number
 * Return: n or -n if n is negitive
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

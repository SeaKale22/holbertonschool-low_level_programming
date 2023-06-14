#include "main.h"
/**
 * _pow_recursion- find the value of x to the power of y
 * @x: number to be raised
 * @y: the power x is raised by
 *
 * Return: the result of x to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x,y - 1));
}

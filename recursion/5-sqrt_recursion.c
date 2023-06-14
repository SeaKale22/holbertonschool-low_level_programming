#include "main.h"
/**
 * _sqrt_recursion- find the square root of a number
 * @n: the number in question
 *
 * Return: the natral square root
 *
 * sqrtfinder- helper function to narrow or widen search
 * @low: lower bounds of search
 * @high: upper bounds of search
 */
int sqrtfinder(int n, int low, int high);

int _sqrt_recursion(int n)
{
	return (sqrtfinder(n, 0, n));
}

int sqrtfinder(int n, int low, int high)
{
	int mid;

	if (low > high)
	{
		return (-1);
	}
	mid = low + (high - low) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (sqrtfinder(n, mid + 1, high));
	}
	else
	{
		return (sqrtfinder(n, low, mid - 1));
	}
}

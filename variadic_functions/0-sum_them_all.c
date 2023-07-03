#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all- finds the sum of all paramaters
 * @n :a number
 *
 * Return: the sum of all paramaters or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int result = 0;
	unsigned int i;

	va_start(nums, n);
	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		int num;

		num = va_arg(nums, int);
		result += num;
	}
	va_end(nums);
	return (result);
}

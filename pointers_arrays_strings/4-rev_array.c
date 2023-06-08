#include "main.h"
/**
 * reverse_array- reverse an array
 * @a: Array to be reversed
 * @n: Number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i;
	int t[99];

	for (i = 0; i < n; i++)
	{
		t[i] = a[(n - 1) - i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = t[i];
	}
}

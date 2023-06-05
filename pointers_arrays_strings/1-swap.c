#include "main.h"
/**
 * sawp_int- swaps the values of two integers
 * @a: int to be swaped with b
 * @b: int to be swaped with a
 */
void swap_int(int *a, int *b)
{
	int aa;
	int bb;

	aa = *a;
	bb = *b;

	*b = aa;
	*a = bb;
}

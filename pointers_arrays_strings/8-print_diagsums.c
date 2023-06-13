#include "main.h"
/**
 * print_diagsums- prints the sum of the two diagonals of a square matrix of integers
 * @a: an array
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{


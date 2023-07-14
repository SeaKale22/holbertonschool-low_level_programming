#include "main.h"
/**
 * binary_to_uint- converts binary num to unsigned base 10
 * @b: binary number string
 *
 * Return: converted num or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int len;
	unsigned int place = 1;
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			num += place;
		}
		place *= 2;
	}
	return (num);
}

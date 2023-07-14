#include "main.h"
/**
 * binary_to_unit- converts binary num to unsigned base 10
 * @b: binary number string
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int len;
	int place;
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
	place = 1 << (len - 1);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			num += place;
		}
		place = place >> 1;
	}
	return (num);
}

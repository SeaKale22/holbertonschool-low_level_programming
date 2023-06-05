#include "main.h"
/**
 * rev_string- reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int lgth = 0;
	int start = 0;
	int end = 0;
	char temp;

	while (s[lgth] != '\0')
		lgth++;

	end = lgth - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end --;
	}
}

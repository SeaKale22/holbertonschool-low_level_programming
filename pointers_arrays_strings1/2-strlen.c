#include "main.h"
/**
 * _strlen- returns the length of the string
 * @s: the string to me measured
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int lgth = 0;

	while (*s != '\0')
	{
		lgth++;
		s++;
	}

	return (lgth);
}

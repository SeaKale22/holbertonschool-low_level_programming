#include "main.h"
/**
 * _memset- fills memory with a constant byte\
 * @s:points to memory area
 * @b:constant byte
 * @n: memory to be filled
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

#include "main.h"
/**
 * _strncat- concatenates two strings, using at most n bytes from sorce string
 * @dest: Destination string
 * @src: Soruce string
 * @n: number of bytes from src to be used
 * Return: Pointer to reslulting dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dl = 0;
	int sl = 0;
	int i;

	while (dest[dl] != '\0')
	{
		dl++;
	}
	while (src[sl] != '\0' && sl < n)
	{
		sl++;
	}

	for (i = 0; i < sl; i++)
	{
		dest[dl + i] = src[i];
	}

	if (i < n)
	{
		dest[dl + sl] = '\0';
	}

	return (dest);
}

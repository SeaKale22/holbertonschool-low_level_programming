#include "main.h"
/**
 * _strncpy- copies a string
 * @dest: Destination of copied string
 * @src: Sorce string to be copied
 * @n: max number of characters to be copied
 * Return: Pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int sl = 0;
	int i;

	while (src[sl] != '\0' && sl < n)
	{
		sl++;
	}

	for (i = 0; i < sl && i < n; i++)
	{
		dest[i] = src[i];
	}

	dest[sl] = '\0';
	
	return (dest);
}

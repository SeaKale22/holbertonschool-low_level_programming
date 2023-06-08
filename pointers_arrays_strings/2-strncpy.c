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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

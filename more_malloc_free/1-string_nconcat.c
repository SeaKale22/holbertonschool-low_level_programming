#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat- concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: num of bytes from s2 to use
 *
 * Return: pointer to new string, or NULL if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1;
	unsigned int l2;
	char *dest;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l1 = strlen(s1);
	l2 = strlen(s2);
	if (n >= l2)
	{
		n = l2;
	}
	dest = malloc(sizeof(char) * (l1 + n + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	memcpy(dest, s1, l1);
	memcpy(dest + l1, s2, n);
	dest[l1 + n] = '\0';
	return (dest);
}

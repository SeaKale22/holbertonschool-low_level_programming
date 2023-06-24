#include "main.h"
#include <stdlib.h>
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
	unsigned int l1 = 0;
	unsigned int l2 = 0;
	unsigned int i;
	unsigned int j;
	char *dest;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}
	if (n >= l2)
	{
		dest = malloc(sizeof(char) * (l1 + l2 + 1));
		if (dest == NULL)
		{
			return (NULL);
		}
		for (i = 0; i <= l1; i++)
		{
			dest[i] = s1[i];
		}
		for (j = 0; j < l2; j++)
		{
			dest[l1 + j] = s2[j];
		}
		return (dest);
	}
	else
	{
		dest = malloc(sizeof(char) * (l1 + n + 1));
		if (dest == NULL)
		{
			return (NULL);
		}
		for (i = 0; i <= l1; i++)
		{
			dest[i] = s1[i];
		}
		for (j = 0; j < n; j++)
		{
			dest[l1 + j] = s2[j];
		}
		return (dest);
	}
}

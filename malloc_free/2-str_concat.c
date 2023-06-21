#include "main.h"
#include <stdlib.h>
/**
 * str_concat- concatenates two strings
 * @s1: first string
 * @s2: new string
 *
 * Return: pointer to new space where new string is
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	int l1 = 0;
	int l2 = 0;
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}
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

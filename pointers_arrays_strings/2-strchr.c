#include "main.h"
#define NULL ((void *)0)
/**
 * _strchr- locates a character in a string
 * @s: string to be searched
 * @c: character to be searched for
 *
 * Return: pointer to the first instance of c or NULL if c not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' || s[i] == c; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}

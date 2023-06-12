#include "main.h"
/**
 * _strpbrk- searches string for any set of bytes
 * @s: the string to be searched
 * @accept: bytes to be checked for
 *
 * Return: a pointer to the first match, else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}

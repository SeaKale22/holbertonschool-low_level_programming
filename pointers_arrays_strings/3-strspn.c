#include "main.h"
/**
 * _strspn- gets the length of a prefix substring
 * @s: the string
 * @accept: the substring
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned j;
	unsigned ct = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0';)
		{
			if (s[i] == accept[j])
			{
				ct++;
				break;
			}
			else
			{
				j++;
			}
		}
	}
	return (ct);
}

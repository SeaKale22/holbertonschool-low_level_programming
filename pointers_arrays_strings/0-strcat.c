#include "main.h"
/**
 * _strcat- concatenares two strings
 * @dest: first string to be cat
 * @src: second string to be cat
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int destlngth = 0;
	int srclngth = 0;
	int i;

	while (dest[destlngth] != '\0')
	{
		destlngth++;
	}
	while (src[srclngth] != '\0')
	{
		srclngth++;
	}
	for (i = 0; i < srclngth; i++)
	{
		dest[destlngth + i] = src[i];
	}
	dest[destlngth + srclngth] = '\0';

	return (dest);
}

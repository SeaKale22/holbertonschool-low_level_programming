#include "main.h"
#include <stdlib.h>
/**
 * _strdup- returns pointer to new mem with cpy of str
 * @str: the string to be copied
 *
 * Return: a pointer to newly allocated mem
 */
char *_strdup(char *str)
{
	char *cpy;
	int i;
	int count = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[count] != '\0')
	{
		count++;
	}
	cpy = malloc(sizeof(char) * (count + 1));
	if (cpy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= count; i++)
	{
		cpy[i] = str[i];
	}
	return (cpy);
}

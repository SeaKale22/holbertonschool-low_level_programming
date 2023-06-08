#include "main.h"
/**
 * _strcmp- compares two strings
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 * Return: returns a value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else if (s1[i] < s2[i])
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}

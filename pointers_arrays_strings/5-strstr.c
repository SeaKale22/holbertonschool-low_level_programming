#include "main.h"
/**
 * _strstr- finds a substring
 * @haystack: The string to be searched
 * @needle: Substring to be located
 *
 * Return: pointer to beging of substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int start;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			start = i;

			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (&haystack[start]);
			}
		}
	}
	return ('\0');
}

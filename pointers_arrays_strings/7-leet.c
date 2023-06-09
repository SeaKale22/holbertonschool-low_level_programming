#include "main.h"
/**
 * leet- encodes a string into 1337
 * @str: string to be encoded
 * Return: encoded string
 */
char *leet(char *str)
{
	int i;
	char repl[] = "aAeEoOtTlL";
	char leet[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		int j;
		for (j = 0; repl[j] != '\0'; j++)
		{
			if (str[i] == repl[j])
			{
				str[i] = leet[j];
				break;
			}
		}
	}
	return (str);
}

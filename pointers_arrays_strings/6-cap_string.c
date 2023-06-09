#include "main.h"
/**
 * cap_string- capitalizes all words of a string
 * @str: String to be modified
 * Return: The modified string
 */
char *cap_string(char *str)
{
	int capnxt = 1;
	int i;

	for ( i = 0; str[i] != '\0'; i++)
	{
		if (capnxt && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 'a' - 'A';
			capnxt = 0;
		}
		else if (!capnxt && (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 'A' - 'a';
		}

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
				str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
				str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}' || str[i] == '\0')
		{
				capnxt = 1;
		}
	}
	return (str);
}

#include "main.h"
/**
 * cap_string- capitilizes all words of a string
 * @str: The string to be modified
 *
 * Return: the modified string
 */
char *cap_string(char *str)
{
	    int i;
	    int cap_next = 1;
	    int word_start = 1;
	    
	    for (i = 0; str[i] != '\0'; i++)
	    {
		    if (str[i] >= 'a' && str[i] <= 'z')
		    {
			    if (cap_next == 1 && word_start == 1)
			    {
				    str[i] = str[i] - ('a' - 'A');
				    cap_next = 0;
			    }
		    }
		    else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
				    str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
				    str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				    str[i] == '}')
		    {
			    cap_next = 1;
			    word_start = 1;
		    }
		    else
		    {
			    word_start = 0;
		    }
	    }
	    return (str);
}

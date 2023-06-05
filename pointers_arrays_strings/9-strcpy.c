#include "main.h"
/**
 * _strcpy- copies string to buffer
 * @src: pointer thats points to sting to be copied
 * @dest: points to buffer where the copy will go
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);
}

#include "main.h"
/**
 * _isalpha- Prints 1 if c is a letter or prints 0 otherwise
 * @c: a character
 * Return: 1 if c is letter, else 0
 */

int _isalpha(int c)
{
	if (( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ))
		return (1);
	else
		return  (0);
}

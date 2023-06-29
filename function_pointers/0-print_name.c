#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name- prints a name
 * @name: name to be printed
 * @f: function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
	f(name);
	}
}

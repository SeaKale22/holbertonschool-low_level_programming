#include "3-calc.h"
#include <string.h>
/**
 * get_op_func- selects the correct function to perform the operation
 * @s: operator passed to this function
 *
 * Return: pointer to function that corrosponds to operator provided
 *
 * @op_add: adds
 * @op_sub: subtracts
 * @op_mul: multiplies
 * @op_div: divides
 * @op_mod: modulo
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	 {"+", op_add},
	 {"-", op_sub},
	 {"*", op_mul},
	 {"/", op_div},
	 {"%", op_mod},
	 {NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

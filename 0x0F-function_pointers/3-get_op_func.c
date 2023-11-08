#include "3-calc.h"

/**
 * get_op_func - A function pointer
 *
 * @s: character signifying the sign of the mathematical operation
 *
 * Return: Integer
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
	int i;

	i = 0;
	while (i < 6)
	{
		if (s[0] && s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	if (!s[0])
		return (NULL);
	return (NULL);
}
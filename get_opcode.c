#include "monty.h"
/**
 * get_opcode - get the correct operation code
 * @s: input
 * Return: operation to be used
 */

operator_t *get_opcode(const char *tokray)
{
	operator_t array[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"nop", op_nop},
		{NULL, NULL}
	};
	array = malloc(sizeof(operation_t));
	int i = 0;
	while (array[i].opcode && strcmp(array[i].opcode, tokray))
	{
		i++;
	}
	return (array);
}

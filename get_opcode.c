#include "monty.h"
/**
 * get_opcode - get the correct operation code
 * @s: input
 * Return: operation to be used
 */

void (*get_opcode(char **tokray))()
{
	int i = 0;
	instruction_t array[] = {
		{"push", op_push},
		{"pall", op_pall},/*
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"nop", op_nop},*/
		{NULL, NULL}
	};

	while (array[i].opcode && strcmp(array[i].opcode, tokray[0]))
	{
		i++;
	}
	if (i == 0 && tokray[1])
		svar_t.push_val = tokray[1];
	return (array[i].f);
}

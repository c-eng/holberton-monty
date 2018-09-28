#include "monty.h"
/**
 * get_opcode - get the correct operation code
 * Return: operation to be used
 */
void (*get_opcode())()
{
	int i = 0;
	instruction_t array[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", mdiv},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{"stack", stack},
		{"queue", queue},
		{NULL, NULL}
	};
	if (share.tokray[0])
	{
		if (share.tokray[0][0] == '#')
			return (array[6].f);
		while (array[i].opcode &&
		       strcmp(array[i].opcode, share.tokray[0]))
			i++;
		if (i == 0)
		{
			if (share.tokray[1])
			{
				if (intcheck(share.tokray[1]))
					share.push_val = atoi(share.tokray[1]);
				else
					err_exit(1, "usage: push integer\n", 0);
			}
			else
				err_exit(1, "usage: push integer\n", 0);
		}
	}
	else
		return (array[6].f);
	if (!array[i].opcode)
	{
		share.post_err = share.tokray[0];
		err_exit(1, "unknown instruction", 1);
	}
	return (array[i].f);
}

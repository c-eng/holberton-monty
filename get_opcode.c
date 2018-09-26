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
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
       		{"swap", swap},
       		{"add", add},
		{"nop", nop},
		{NULL, nop}
	};

	/* printf("getting opcode\n"); */
	if (tokray[0])
	{
		while (array[i].opcode && strcmp(array[i].opcode, tokray[0]))
		{
			/* printf("%s, %s\n", tokray[0], array[i].opcode); */
			i++;
		}
		if (i == 0 && tokray[1])
		{
			/*	printf("assigning value\n"); */
			share.push_val = atoi(tokray[1]);
		}
	}
	else
		return (array[7].f);
	return (array[i].f);
}

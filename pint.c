#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @head: double pointer to head
 * @line_num: the line number
 * Return: nothing
 */
void pint(stack_t **head, unsigned int line __attribute__((unused)))
{
	if (!*head)
		err_exit(1, "can't pint, stack empty\n", 0);
	printf("%d\n", (*head)->n);
}

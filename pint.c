#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @head: double pointer to head
 * @line_num: the line number
 * Return: nothing
 */
void pint(stack_t **head, unsigned int line)
{
	if (!*head)
	{
		printf("L%d: can't pint, stack empty\n", line);
		exit(EXIT_FAILURE);
		return;
	}
	printf("%d\n", (*head)->n);
}

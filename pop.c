#include "monty.h"
/**
 * pop - removes the top element of the stack
 * @head: double pointer to head
 * @line: the line number
 * Return: nothing
 */
void pop(stack_t **head, unsigned int line)
{
	stack_t *strider;
	if (!*head)
	{
		printf("L%d: can't pop an empty stack\n", line);
		exit(EXIT_FAILURE);
	}
	printf("popping\n");
	strider = (*head)->next;
	if (strider)
		strider->prev = NULL;
	free(*head);
	(*head) = strider;
	printf("done popping\n");
}

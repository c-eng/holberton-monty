#include "monty.h"
/**
 * pop - removes the top element of the stack
 * @head: double pointer to head
 * @line: the line number
 * Return: nothing
 */
void pop(stack_t **head, unsigned int line __attribute__((unused)))
{
	stack_t *strider;

	if (!*head)
		err_exit(1, "can't pop an empty stack\n", 0);
	strider = (*head)->next;
	if (strider)
		strider->prev = NULL;
	free(*head);
	(*head) = strider;
}

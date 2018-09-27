#include "monty.h"
/**
 * sub - subtracts the top two elements of the stack
 * @head: double pointer to head
 * @line: the line number
 * Return: nothing
 */
void sub(stack_t **head, unsigned int line __attribute__((unused)))
{
	int diff = 0;
	stack_t *strider;

	if (!*head || (*head)->next == NULL)
		err_exit(1, "can't sub, stack too short\n", 0);
	strider = (*head)->next;
	diff = strider->n - (*head)->n;
	strider->n = diff;
	free(*head);
	strider->prev = NULL;
	*head = strider;
}

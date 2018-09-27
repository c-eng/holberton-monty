#include "monty.h"
/**
 * mdiv - divides the top two elements of the stack
 * @head: double pointer to head
 * @line: the line number
 * Return: nothing
 */
void mdiv(stack_t **head, unsigned int line __attribute__((unused)))
{
	int div = 0;
	stack_t *strider;

	if (!*head || (*head)->next == NULL)
		err_exit(1, "can't div, stack too short\n", 0);
	strider = (*head)->next;
	if ((*head)->n == 0)
		err_exit(1, "division by zero\n", 0);
	div = (*head)->n / strider->n;
	strider->n = div;
	free(*head);
	strider->prev = NULL;
	*head = strider;
}

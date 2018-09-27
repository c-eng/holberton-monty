#include "monty.h"
/**
 * mod - modulo the top two elements
 * @head: double pointer to head
 * @line: the line number
 * Return: nothing
 */
void mod(stack_t **head, unsigned int line __attribute__((unused)))
{
	int div = 0;
	stack_t *strider;

	if (!*head || (*head)->next == NULL)
		err_exit(1, "can't mod, stack too short\n", 0);
	strider = (*head)->next;
	if ((*head)->n == 0)
		err_exit(1, "division by zero\n", 0);
	div = strider->n % (*head)->n;
	strider->n = div;
	free(*head);
	strider->prev = NULL;
	*head = strider;
}

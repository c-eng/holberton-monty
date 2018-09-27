#include "monty.h"
/**
 * mul - multiplies the top two elements of the stack
 * @head: double pointer to head
 * @line: the line number
 * Return: nothing
 */
void mul(stack_t **head, unsigned int line __attribute__((unused)))
{
	int product = 0;
	stack_t *strider;

	if (!*head || (*head)->next == NULL)
		err_exit(1, "can't mul, stack too short\n", 0);
	strider = (*head)->next;
	product = (*head)->n * strider->n;
	strider->n = product;
	free(*head);
	strider->prev = NULL;
	*head = strider;
}

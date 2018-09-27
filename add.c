#include "monty.h"
/**
 * add - adds the top two elements of the stack
 * @head: double pointer to head
 * @line: the line number
 * Return: nothing
 */
void add(stack_t **head, unsigned int line __attribute__((unused)))
{
	int sum = 0;
	stack_t *strider;
	if (!*head || (*head)->next == NULL)
		err_exit(1, "can't add, stack too short\n", 0);
	strider = (*head)->next;
	sum = (*head)->n + strider->n;
	strider->n = sum;
	free(*head);
	strider->prev = NULL;
	*head = strider;
}

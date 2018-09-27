#include "monty.h"
/**
 * swap - swaps the first two elements of the stack
 * @head: double pointer to head
 * @line: the line number
 * Return: void
 */
void swap(stack_t **head, unsigned int line __attribute__((unused)))
{
	stack_t *strider;
	int temp = 0;
	if (!*head || (*head)->next == NULL)
		err_exit(1, "can't swap, stack too short\n", 0);
	strider = (*head)->next;
	temp = (*head)->n;
	(*head)->n = strider->n;
	strider->n = temp;
}

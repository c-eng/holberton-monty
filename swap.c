#include "monty.h"
/**
 * swap - swaps the first two elements of the stack
 * @head: double pointer to head
 * @line: the line number
 * Return: void
 */
void swap(stack_t **head, unsigned int line)
{
	stack_t *strider;
	int temp = 0;
	if (!*head || (*head)->next == NULL)
	{
		printf("L%d: can't swap, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	strider = (*head)->next;
	temp = (*head)->n;
	(*head)->n = strider->n;
	strider->n = temp;
}

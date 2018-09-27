#include "monty.h"
/**
 * pall - prints the elements
 * @head: Head of doubly linked list
 * @line: the line number
 * Return: nothing
 */
void pall(stack_t **head, unsigned int line __attribute__((unused)))
{
	size_t node = 0;
	stack_t *strider = (stack_t *) *head;

	while (strider)
	{
		printf("%d\n", strider->n);
		node += 1;
		strider = strider->next;
	}
}

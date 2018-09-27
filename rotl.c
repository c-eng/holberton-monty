#include "monty.h"
/**
 * rotl - rotate the stack to the top
 * @head: double pointer to head
 * @line: the line number
 * Return: nothing
 */
void rotl(stack_t **head, unsigned int line __attribute__((unused)))
{
	stack_t *strider;

	if (!*head || (*head)->next == NULL)
		return;
	strider = (*head);
	while (strider->next)
		strider = strider->next;
	(*head) = (*head)->next;
	strider->next = (*head)->prev;
	(*head)->prev->prev = strider;
	(*head)->prev->next = NULL;
	(*head)->prev = NULL;
}

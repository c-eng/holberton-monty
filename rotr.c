#include "monty.h"
/**
 * rotr - rotate the stack to the bottom
 * @head: double pointer to head
 * @line: the line number
 * Return: nothing
 */
void rotr(stack_t **head, unsigned int line __attribute__((unused)))
{
	stack_t *strider;

	if (!*head || (*head)->next == NULL)
		return;
	strider = (*head);
	while (strider->next)
		strider = strider->next;
	strider = strider->prev;
	strider->next->next = (*head);
	(*head)->prev = strider->next;
	(*head)->prev->prev = NULL;
	strider->next = NULL;
	(*head) = (*head)->prev;
}

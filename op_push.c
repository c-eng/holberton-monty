#include "monty.h"

/**
 * push - pushes value onto head of list
 *
 * @head: head of list
 * @line: line number
 *
 * Return: address of new node or NULL if it fails
 */

void push(stack_t **head, unsigned int line __attribute__((unused)))
{
	stack_t *add = NULL;

	printf("Pushing: %d\n", share.push_val);
	if (!head)
		return;
	add = malloc(sizeof(stack_t));
	if (!add)
		return;
	add->n = (int) share.push_val;
	add->next = *head;
	add->prev = NULL;
	*head = add;
	if (add->next)
		add->next->prev = add;
	return;
}

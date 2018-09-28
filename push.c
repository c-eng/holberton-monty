#include "monty.h"
/**
 * push - pushes value onto head of list
 * @head: head of list
 * @line: line number
 * Return: address of new node or NULL if it fails
 */
void push(stack_t **head, unsigned int line __attribute__((unused)))
{
	stack_t *add = NULL;
	stack_t *strider = NULL;


	if (!head)
		err_exit(0, "Headless Add\n", 0);
	strider = (*head);
	add = malloc(sizeof(stack_t));
	if (!add)
		err_exit(0, "Error: malloc failed\n", 0);

	if (share.queue == 0)
	{
		add->n = (int) share.push_val;
		add->next = *head;
		add->prev = NULL;
		*head = add;
		if (add->next)
			add->next->prev = add;
	}
	else
	{
		add->n = (int) share.push_val;
		add->next = NULL;
		if (strider)
		{
			while (strider->next)
				strider = strider->next;
			strider->next = add;
			add->prev = strider;
		}
		else
		{
			(*head) = add;
			add->prev = NULL;
		}
	}
}

#include "monty.h"
/**
 * pchar - prints the char at the top of the stack
 * @head: double pointer to head
 * @line: the line number
 * Return: nothing
 */
void pchar(stack_t **head, unsigned int line __attribute__((unused)))
{
	if (!*head)
		err_exit(1, "can't pchar, stack empty\n", 0);
	if ((*head)->n < 0 || (*head)->n > 127)
	{
		err_exit(1, "can't pchar, value out of range\n", 0);
	}
	printf("%c\n", (*head)->n);
}

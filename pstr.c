#include "monty.h"
/**
 * pstr - prints the string starting at the top of the stock
 * @head: double pointer to head
 * @line: the line number
 * Return: nothing
 */
void pstr(stack_t **head, unsigned int line __attribute__((unused)))
{
	stack_t *strider;
	int strider_v;

	strider = *head;
	while (strider)
	{
		strider_v = strider->n;
		if (strider_v == 0)
			break;
		if (strider_v < 0 || strider_v > 127)
			break;
		printf("%c", strider_v);
		strider = strider->next;
	}
	printf("\n");
}

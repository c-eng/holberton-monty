#include "monty.h"
/**
 * free_monty - Frees monty list
 *
 * Return: void
 */
void free_monty(void)
{
	while (share.head)
	{
		if (share.head->prev)
			free(share.head->prev);
		if (!share.head->next)
		{
			free(share.head);
			break;
		}
		else
			share.head = share.head->next;
	}
}

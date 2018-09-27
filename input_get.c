#include "monty.h"

/**
 * input_get - gets input for monty interpretation
 *
 * Return: 0
 */

int input_get(void)
{
	char *get;
	int size = BUF_MAX;

	get = fgets(share.file_buffer, size, share.fd);
	if (!get)
		return (-1);
	return (0);
}

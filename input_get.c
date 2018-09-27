#include "monty.h"

/**
 * input_get - gets input for monty interpretation
 *
 * @file: file descriptor
 *
 * Return: 0
 */

int input_get(FILE *file)
{
	char *get;
	int size = BUF_MAX;

	get = fgets(share.file_buffer, size, file);
	if (!get)
		return (-1);
	/* printf("%s", buffer);
	   printf("NEWLINE::::::\n"); */
	return (0);
}

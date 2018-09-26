#include "monty.h"

/**
 * input_get - gets input for monty interpretation
 *
 * @buffer: file input buffer
 * @file: file descriptor
 * @str_array: parsed by line input array
 *
 * Return: 0
 */

int input_get(char *buffer, FILE *file)
{
	char *get;
	int size = BUF_MAX;

	get = fgets(buffer, size, file);
	if (!get)
	{
		return (-1);
	}
	return (0);
}

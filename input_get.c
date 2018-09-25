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

int input_get(char *buffer, int file, char **str_array)
{
	char *line, new[] = {'\n', '\0'};
	size_t size = BUF_MAX; /* assuming filesize is less than buff max */
	ssize_t bytes;
	int j = 0;

	bytes = read(file, buffer, size);
	if (bytes == -1)
	{
		return (-1);
	}
	line = strtok(buffer, new);
	while (line)
	{
		str_array[j] = line;
		line = strtok(NULL, new);
		j++;
	}
	str_array[j] = NULL;
	return (0);
}

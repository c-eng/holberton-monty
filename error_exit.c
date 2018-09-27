#include "monty.h"

/**
 * err_exit - Error handling and error exiting for Monty interpreter
 *
 * @line_append: pre-append error line flag
 * @error: Error message to print
 * @end: post append error message flag
 *
 * Return: UNKNOWN
 */

void err_exit(int line_append, char *error, int end)
{
	if (line_append == 1)
		fprintf(stderr, "L%d: ", share.line_no);
	if (end == 1)
	{
		fprintf(stderr, "%s ", error);
		fprintf(stderr, "%s", share.post_err);
	}
	else
		fprintf(stderr, "%s", error);
	if (share.file_buffer)
		free(share.file_buffer);
	if (share.tokray)
		free(share.tokray);
	if (share.head)
		free(share.head);
	exit(EXIT_FAILURE);
}

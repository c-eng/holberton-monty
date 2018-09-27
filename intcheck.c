#include "monty.h"
/**
 * intcheck - checks string if it is an int
 *
 * @str: string to check
 *
 * Return: 1 if int, 0 if not
 */
int intcheck(char *str)
{
	int idx = 0;

	if (str[idx] == '-')
		idx++;
	if (str[idx] == '\0')
		return (0);
	while (str[idx] != '\0')
	{
		if (isdigit(str[idx]))
			;
		else
			return (0);
		idx++;
	}
	return (1);
}

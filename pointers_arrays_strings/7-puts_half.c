#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: input string
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int start;

	/* calculate length */
	while (str[length] != '\0')
	{
		length++;
	}

	/* determine starting index */
	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length + 1) / 2;

	/* print second half */
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

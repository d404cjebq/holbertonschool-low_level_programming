#include "main.h"

/**
 * infinite_add - Adds two numbers as strings and stores result in buffer
 * @n1: First number as string
 * @n2: Second number as string
 * @r: Buffer to store result
 * @size_r: Size of buffer
 *
 * Return: Pointer to result, or 0 if result can't be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l1, l2, carry, sum, digit, max_len;

	/* Get lengths of both numbers */
	for (l1 = 0; n1[l1] != '\0'; l1++)
		;
	for (l2 = 0; n2[l2] != '\0'; l2++)
		;

	/* Determine maximum length needed for result */
	max_len = (l1 > l2 ? l1 : l2) + 1;

	/* Check if result can fit in buffer */
	if (max_len >= size_r)
		return (0);

	/* Initialize buffer with null terminators */
	for (i = 0; i < size_r; i++)
		r[i] = '\0';

	/* Start addition from the end of strings */
	i = l1 - 1;
	j = l2 - 1;
	k = max_len - 1;
	carry = 0;

	/* Perform addition digit by digit */
	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = carry;

		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}

		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}

		digit = sum % 10;
		carry = sum / 10;

		r[k] = digit + '0';
		k--;
	}

	/* Remove leading zeros by shifting */
	if (r[0] == '0')
	{
		for (i = 0; r[i] != '\0'; i++)
			r[i] = r[i + 1];
	}

	/* Handle case where result is exactly size_r - 1 */
	if (r[0] == '\0')
	{
		for (i = 0; i < max_len - 1; i++)
			r[i] = '0';
		r[i] = '\0';
	}

	return (r);
}

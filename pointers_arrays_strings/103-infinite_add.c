#include "main.h"
#include <string.h>

/**
 * infinite_add - adds two number strings and stores result in buffer
 * @n1: first number string
 * @n2: second number string
 * @r: result buffer
 * @size_r: size of result buffer
 *
 * Return: pointer to result, or 0 if buffer too small
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, i, j, k, sum;

	len1 = strlen(n1);
	len2 = strlen(n2);

	/* Need at most max(len1, len2) + 1 digits + null terminator */
	if (size_r <= (len1 > len2 ? len1 : len2) + 1)
		return (0);

	carry = 0;
	i = len1 - 1;    /* index into n1, right to left */
	j = len2 - 1;    /* index into n2, right to left */
	k = size_r - 2;  /* index into r, right to left (leave room for '\0') */

	r[size_r - 1] = '\0';

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		carry = sum / 10;

		if (k < 0)
			return (0);

		r[k--] = (sum % 10) + '0';
	}

	/* Return pointer to where the number starts in the buffer */
	return (&r[k + 1]);
}

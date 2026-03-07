#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints the content of a buffer
 * @b: pointer to the buffer
 * @size: number of bytes to print
 */
void print_buffer(char *b, int size)
{
	int i, j;
	unsigned char byte1, byte2;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		/* Print position (8 hex chars) */
		printf("%08x: ", i);

		/* Print hex content, 2 bytes at a time, 5 pairs per line */
		for (j = 0; j < 10; j += 2)
		{
			if (i + j < size)
			{
				byte1 = (unsigned char)b[i + j];
				printf("%02x", byte1);
			}
			else
				printf("  ");

			if (i + j + 1 < size)
			{
				byte2 = (unsigned char)b[i + j + 1];
				printf("%02x", byte2);
			}
			else
				printf("  ");

			printf(" ");
		}

		/* Print printable characters */
		for (j = 0; j < 10 && i + j < size; j++)
		{
			if (b[i + j] >= 32 && b[i + j] < 127)
				printf("%c", b[i + j]);
			else
				printf(".");
		}

		printf("\n");
	}
}

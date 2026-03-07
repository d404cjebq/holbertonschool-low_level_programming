#include "main.h"
#include <stdio.h>

/**
 * print_hex_row - prints hex pairs for one row of the buffer
 * @b: pointer to the buffer
 * @i: starting index of the row
 * @size: total buffer size
 */
void print_hex_row(char *b, int i, int size)
{
	int j;
	unsigned char byte1, byte2;

	for (j = 0; j < 10; j += 2)
	{
		if (i + j < size)
			byte1 = (unsigned char)b[i + j];
		else
			byte1 = 0;

		if (i + j + 1 < size)
			byte2 = (unsigned char)b[i + j + 1];
		else
			byte2 = 0;

		if (i + j < size)
			printf("%02x%02x ", byte1, byte2);
		else
			printf("     ");
	}
}

/**
 * print_char_row - prints printable characters for one row of the buffer
 * @b: pointer to the buffer
 * @i: starting index of the row
 * @size: total buffer size
 */
void print_char_row(char *b, int i, int size)
{
	int j;

	for (j = 0; j < 10 && i + j < size; j++)
	{
		if (b[i + j] >= 32 && b[i + j] < 127)
			printf("%c", b[i + j]);
		else
			printf(".");
	}
}

/**
 * print_buffer - prints the content of a buffer
 * @b: pointer to the buffer
 * @size: number of bytes to print
 */
void print_buffer(char *b, int size)
{
	int i;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		print_hex_row(b, i, size);
		print_char_row(b, i, size);
		printf("\n");
	}
}

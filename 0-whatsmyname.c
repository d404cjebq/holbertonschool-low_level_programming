#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/* Ignore argc to avoid unused parameter warning */
	(void)argc;

	/* Print the program name (first element of argv) */
	printf("%s\n", argv[0]);

	return (0);
}

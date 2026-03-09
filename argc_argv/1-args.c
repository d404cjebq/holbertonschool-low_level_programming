#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array of command line arguments (unused)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/* Ignore argv to avoid unused parameter warning */
	(void)argv;

	/* Print the number of arguments (argc - 1 excludes program name) */
	printf("%d\n", argc - 1);

	return (0);
}

#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	/* Loop through all arguments */
	for (i = 0; i < argc; i++)
	{
		/* Print each argument on its own line */
		printf("%s\n", argv[i]);
	}

	return (0);
}

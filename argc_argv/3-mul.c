#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Check if we have exactly 2 arguments (plus program name) */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);  /* Return 1 to indicate error */
	}

	/* Convert strings to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Multiply and print result */
	result = num1 * num2;
	printf("%d\n", result);

	return (0);  /* Return 0 on success */
}

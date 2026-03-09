#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	/* Check if exactly one argument is passed */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert argument to integer */
	cents = atoi(argv[1]);

	/* If amount is negative, print 0 */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Greedy algorithm: use largest coins first */
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			coins++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			coins++;
		}
		else
		{
			cents -= 1;
			coins++;
		}
	}

	/* Print the minimum number of coins */
	printf("%d\n", coins);

	return (0);
}

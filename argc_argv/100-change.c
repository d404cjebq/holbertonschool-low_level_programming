#include <stdio.h>
#include <stdlib.h>

/**
 * calculate_coins - calculates minimum number of coins
 * @cents: amount in cents
 *
 * Return: minimum number of coins needed
 */
int calculate_coins(int cents)
{
	int coins = 0;
	int coin_values[] = {25, 10, 5, 2, 1};
	int i;

	for (i = 0; i < 5; i++)
	{
		coins += cents / coin_values[i];
		cents %= coin_values[i];
	}

	return (coins);
}

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins;

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

	/* Calculate minimum number of coins */
	coins = calculate_coins(cents);

	/* Print the result */
	printf("%d\n", coins);

	return (0);
}

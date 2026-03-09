/**
 * calculate_coins - calculates minimum number of coins using while loop
 * @cents: amount in cents
 *
 * Return: minimum number of coins needed
 */
int calculate_coins(int cents)
{
	int coins = 0;

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

	return (coins);
}

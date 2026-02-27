#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: the multiplier
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int result;

	if (n < 0 || n > 15)
		return;
	i = 0;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			result = i * j;
			if (j == 0)
			{
				_putchar('0' + result / 100);
				_putchar('0' + (result / 10) % 10);
				_putchar('0' + result % 10);
			}
			else
			{
				_putchar(',');
				if (result >= 100)
					_putchar(' ');
				else if (result >= 10)
					_putchar(' ');
				else
					_putchar(' ');
				_putchar(' ');
				if (result >= 100)
					_putchar('0' + result / 100);
				else
					_putchar(' ');
				if (result >= 10)
					_putchar('0' + (result / 10) % 10);
				else
					_putchar(' ');
				_putchar('0' + result % 10);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}

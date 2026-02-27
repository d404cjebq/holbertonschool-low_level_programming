#include "main.h"

/**
 * print_number - prints a number with proper spacing
 * @result: the number to print
 */
void print_number(int result)
{
	_putchar(',');
	if (result < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
	else if (result < 100)
	{
		_putchar(' ');
		_putchar(' ');
	}
	else
	{
		_putchar(' ');
	}
	if (result >= 100)
		_putchar('0' + result / 100);
	if (result >= 10)
		_putchar('0' + (result / 10) % 10);
	_putchar('0' + result % 10);
}

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

	if (n < 0 || n > 15)
		return;
	i = 0;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			if (j == 0)
				_putchar('0' + (i * j));
			else
				print_number(i * j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

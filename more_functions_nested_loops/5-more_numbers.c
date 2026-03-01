#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int n;

	i = 0;
	while (i < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n >= 10)
			{
				_putchar('1');
				_putchar('0' + n - 10);
			}
			else
				_putchar('0' + n);
			n++;
		}
		_putchar('\n');
		i++;
	}
}

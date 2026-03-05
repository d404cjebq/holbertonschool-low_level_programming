#include <stdio.h>

/**
 * main - generates a valid password for 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	/* 2772 / 12 = 231 لكن كبير، نستخدم حروف متكررة */
	/* 'z' = 122, نحتاج 2772 / 122 = ~22 حرف */
	for (i = 0; i < 22; i++)
		printf("%c", 'z');

	/* 2772 - (22 * 122) = 2772 - 2684 = 88 = 'X' */
	printf("%c\n", 'X');
	return (0);
}

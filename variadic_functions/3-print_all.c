#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 * @...: the arguments to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	i = 0;
	va_start(args, format);
	while (format && format[i])
	{
		if (i > 0)
			printf(", ");
		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

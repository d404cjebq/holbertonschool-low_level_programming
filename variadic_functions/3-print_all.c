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
	unsigned int printed;
	char *str;

	i = 0;
	printed = 0;
	va_start(args, format);
	while (format && format[i])
	{
		str = NULL;
		if (format[i] == 'c')
			printf("%s%c", printed++ ? ", " : "", va_arg(args, int));
		if (format[i] == 'i')
			printf("%s%d", printed++ ? ", " : "", va_arg(args, int));
		if (format[i] == 'f')
			printf("%s%f", printed++ ? ", " : "", va_arg(args, double));
		if (format[i] == 's')
		{
			str = va_arg(args, char *);
			printf("%s%s", printed++ ? ", " : "", str ? str : "(nil)");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

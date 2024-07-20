#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - Prints stringss followed by a new line.
 * @separator: String to be printed between strings.
 * @n: Number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (i = 1; i < (int)n; i++)
	{
		printf("%s", va_arg(ap, char*));

		if (separator != NULL)
			printf("%s", separator);
	}

	printf("%s", va_arg(ap, char*));

	va_end(ap);

	printf("\n");
}

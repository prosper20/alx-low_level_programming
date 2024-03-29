#include "variadic_functions.h"

/**
 * print_strings - Prints strings.
 * @separator: A string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Return: Returns void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}

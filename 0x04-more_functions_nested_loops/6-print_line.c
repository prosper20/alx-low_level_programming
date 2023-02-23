#include "main.h"

/**
 * print_line - Draws a straight line on the terminal.
 * @n: The number of times the character _ should be printed
 *
 * Return: Void
 */
void print_line(int n)
{
	if (!(n <= 0))
	{
		int i;

		for (i = 0; i < n; i++)
			_putchar(95);
	}
	_putchar('\n');
}

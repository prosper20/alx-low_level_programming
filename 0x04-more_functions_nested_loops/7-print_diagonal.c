#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (!(n <= 0))
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			if (i > 0)
			{
				_putchar('\n');
				for (j = 0; j < i; j++)
					_putchar(32);
			}
			_putchar(92);
		}
	}
	_putchar('\n');
}

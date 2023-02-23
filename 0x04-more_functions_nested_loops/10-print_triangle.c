#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: The size of the triangle
 *
 * Return: Void
 */
void print_triangle(int size)
{
	if (!(size <= 0))
	{
		int i, j, k;

		for (i = 0; i < size; i++)
		{
			if (i > 0)
				_putchar('\n');
			for (j = size - i; j > 0; j--)
				_putchar(32);
			for (k = 0; k < i + 1; k++)
				_putchar(35);
		}
	}
	_putchar('\n');
}

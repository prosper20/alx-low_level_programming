#include "main.h"

/**
 * print_square - Prints  square
 * @size: The size of the square
 *
 * Return: Void
 */
void print_square(int size)
{
	if (!(size <= 0))
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			if (i > 0)
				_putchar('\n');
			for (j = 0; j < size; j++)
				_putchar(35);
		}
	}
	_putchar('\n');
}

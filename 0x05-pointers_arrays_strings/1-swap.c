#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: Returns void.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

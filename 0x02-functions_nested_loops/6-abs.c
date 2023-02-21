#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The number to be evaluated.
 *
 * Return: Absolute value of number
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (0 - n);
	}
}

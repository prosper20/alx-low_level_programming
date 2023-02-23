#include "main.h"

/**
 * _isdigit - Checks if a charater is a digit.
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit. 0 otherwise
 */
int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}

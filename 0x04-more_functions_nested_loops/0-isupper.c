#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 * @c: The character to be checked
 *
 * Return: 1 for uppercase. 0 otherwise.
 */
int _isupper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}

#include "main.h"

/**
 * _islower - Checks for lowercase character.
 * @c: The character to  be checked
 *
 * Return: Returns 1 for lowercase, 0 if otherwise.
 */
int _islower(int c)
{
	return ((c >= 97 && c <= 122) ? 1 : 0);
}

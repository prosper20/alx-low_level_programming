#include "main.h"
/**
 * _memset - Fills memory with a constant byte,
 * @s: Memory areapointed to by s.
 * @b: Constant byte.
 * @n: Number of bytes area to be filled.
 * Return: Returns Pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}

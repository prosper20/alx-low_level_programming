#include "main.h"

/**
 * _strncat - Concatenates two strings,
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of bytes from src.
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0, i = 0;

	while (*(dest + length) != '\0')
	{
		length++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[length + i] = src[i];
	dest[length + i] = '\0';

	return (dest);
}

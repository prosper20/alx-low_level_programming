#include "main.h"
/**
 * _memcpy - Copies memory area,
 * @dest: Destination memory area.
 * @src: Source memory area.
 * @n: No of bytes filled.
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}

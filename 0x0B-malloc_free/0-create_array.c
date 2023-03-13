#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars.
 * @size: Size of the array.
 * @c: Initialization char
 *
 * Return: Pointer to the new array
 */
char *create_array(unsigned int size, char c)
{
	char *charray;
	unsigned int i;

	if (size == 0)
		return (NULL);

	charray = malloc(sizeof(char) * size);

	if (charray == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		charray[i] = c;
		i++;
	}

	return (charray);
}

#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Copies a string to a newly allocated memory space.
 * @str: The string to copy.
 *
 * Return: Pointer to the newly allocated space in memory.
 */
char *_strdup(char *str)
{
	char *strCopy;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	strCopy = (char *)malloc(sizeof(char) * (i + 1));

	if (strCopy == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strCopy[j] = str[j];

	return (strCopy);
}

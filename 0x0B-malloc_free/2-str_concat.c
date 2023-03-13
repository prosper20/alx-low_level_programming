#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the resulting string.
 */
char *str_concat(char *s1, char *s2)
{
	char *strNew;
	unsigned int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	strNew = malloc(sizeof(char) * (i + j + 1));

	if (strNew == NULL)
	{
		free(strNew);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		strNew[k] = s1[k];
	j = 0;
	while (s2[j] != '\0')
	{
		strNew[k] = s2[j];
		k++;
		j++;
	}
	strNew[k] = '\0';

	return (strNew);
}

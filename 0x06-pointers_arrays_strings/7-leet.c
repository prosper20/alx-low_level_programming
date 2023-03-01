#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: Input string.
 * Return: Pointer to the resulting string.
 */

char *leet(char *s)
{
	int count = 0, i;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int digits[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lower[i] || *(s + count) == upper[i])
			{
				*(s + count) = digits[i];
				break;
			}
		}
		count++;
	}

	return (s);
}

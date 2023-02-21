#include "main.h"

/**
 * main - Prints _putchar, followed by a new line.
 *
 * Return: Returns 0.
 */
int main(void)
{
	int arr[8] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(arr[i]);
	}
	_putchar('\n');
	return (0);
}

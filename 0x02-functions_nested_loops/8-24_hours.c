#include "main.h"

/**
 * jack_bauer - Prints the minutes of the day
 *
 * Return: Returns void
 */
void jack_bauer(void)
{
	int H, h, m, s;

	for (H = 48; H <= 50; H++)
	{
		for (h = 48; h <= 57; h++)
		{
			for (m = 48; m <= 53; m++)
			{
				for (s = 48; s <= 57; s++)
				{
					if (H >= 50 && h >= 52)
						break;
					_putchar(H);
					_putchar(h);
					_putchar(58);
					_putchar(m);
					_putchar(s);
					_putchar('\n');
				}
			}
		}
	}
}

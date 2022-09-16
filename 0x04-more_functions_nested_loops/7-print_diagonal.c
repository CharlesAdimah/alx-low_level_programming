#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int s, p;

	if (n > 0)
	{
		for (s = 0; s < n; s++)
		{
			for (p = 0; p < n;  p++)
			{
				putchar(' ');
			}

			putchar('\\');

			if (s == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
}

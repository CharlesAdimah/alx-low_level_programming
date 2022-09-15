#include <std.io>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from n
 */
void print_to_98(int n)
{
	int k, t;

	if (n <= 98)
	{
		for (k = n; k <= 98; k++)
		{
			if (k != 98)
			{
				printf("%d, ", k);
			}
			else
			{
				printf("%d\n", k);
			}
		}
	}
	else if (n >= 98)
	{
		for (t = n; t >= 98; t--)
		{
			if (t != 98)
			{
				printf("%d, ", t);
			}
			else
			{
				printf("%d\n", t);
			}
		}
	}
}

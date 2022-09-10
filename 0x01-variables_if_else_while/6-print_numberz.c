#include <stdio.h>

/**
 * main - prints numbers 0 to 9 with putchar
 * Return: Always 0 (When successful)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - prints base 16 numbers in lower case
 * with a new line
 * Return: Always 0 (When successful)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

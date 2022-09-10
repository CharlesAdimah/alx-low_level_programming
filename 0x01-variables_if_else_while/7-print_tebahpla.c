#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 * Return: Always 0 (When executed successfully)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - print alphabet in lowercase
 * Return: Always 0 (When executed successfully)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

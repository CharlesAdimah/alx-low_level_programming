#include "main.h"

/**
 * _puts - prints a string to stdout
 * followed by a new line
 * @str: pointer to the string to print
 */

void _puts(char *str)
{
	int e = 0;

	while (*(str + e) != '\0')
	{
		putchar(*(str + e));
		e++;
	}

	putchar(10);
}

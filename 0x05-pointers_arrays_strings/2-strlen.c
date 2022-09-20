#include "main.h"

/**
 * _strlen - Gives the length of the string
 * @s: string lenght to get
 * Return: returns string length as interger
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[lenght] != '\0')
	{
		length++;
	}

	return (length);
}
